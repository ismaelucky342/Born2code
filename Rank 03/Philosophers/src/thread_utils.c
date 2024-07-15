#include "philo_lib.h"

void *alive_philosopher_check(void *p)
{
    t_philosopher *philo = (t_philosopher *)p;

    while (1)
    {
        pthread_mutex_lock(&philo->pause_mutex);
        if (philo->remaining_time < get_current_time())
        {
            display_message(philo->sim, philo, DIED);
            pthread_mutex_lock(&philo->sim->output_mutex);
            pthread_mutex_unlock(&philo->sim->death_mutex);
            return NULL;
        }
        pthread_mutex_unlock(&philo->pause_mutex);
        usleep(1000);
    }
}

void *philosopher_thread(void *arg)
{
    t_philosopher *philo = (t_philosopher *)arg;
    pthread_t thread;
    long long i = -1;

    if (philo->philosopher_id % 2 == 0)
        custom_usleep(philo->sim->eating_duration / 10);

    philo->time_of_last_meal = get_current_time();
    philo->remaining_time = philo->time_of_last_meal + philo->sim->death_time_threshold;

    if (pthread_create(&thread, NULL, alive_checker, philo) != 0) return (void *)1;

    while (philo->sim->required_meals == -1 || ++i < philo->sim->required_meals)
    {
        perform_actions(philo->sim, philo);
    }
    return NULL;
}
