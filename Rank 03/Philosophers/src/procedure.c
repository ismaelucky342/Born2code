#include "philo_lib.h"

void perform_actions(t_simulation *sim, t_philosopher *ph)
{
    if (take_forks(sim, ph) == 2)
    {
        eat(sim, ph);
        sleep(sim, ph);
        think(sim, ph);
    }
}

static void eat(t_simulation *sim, t_philosopher *ph)
{
    ph->time_of_last_meal = get_current_time();
    pthread_mutex_lock(&ph->pause_mutex);
    ph->remaining_time = ph->time_of_last_meal + sim->death_time_threshold;
    pthread_mutex_unlock(&ph->pause_mutex);

    display_message(sim, ph, EATING);
    custom_usleep(sim->eating_duration);

    pthread_mutex_lock(&ph->pause_mutex);
    ph->total_meals_eaten++;
    pthread_mutex_unlock(&ph->pause_mutex);

    pthread_mutex_unlock(&sim->fork_mutexes[ph->left_fork_id]);
    pthread_mutex_unlock(&sim->fork_mutexes[ph->right_fork_id]);
}

static void sleep(t_simulation *sim, t_philosopher *ph)
{
    display_message(sim, ph, SLEEPING);
    custom_usleep(sim->sleeping_duration);
}

static void think(t_simulation *sim, t_philosopher *ph)
{
    display_message(sim, ph, THINKING);
}
static int take_forks(t_simulation *sim, t_philosopher *ph)
{
    int forks_taken = 0;

    if (ph->left_fork_id != -1)
    {
        pthread_mutex_lock(&sim->fork_mutexes[ph->left_fork_id]);
        display_message(sim, ph, TOOK_FORK);
        forks_taken++;
    }

    pthread_mutex_lock(&sim->fork_mutexes[ph->right_fork_id]);
    display_message(sim, ph, TOOK_FORK);
    forks_taken++;

    return forks_taken;
}



