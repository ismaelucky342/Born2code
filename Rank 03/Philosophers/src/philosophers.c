#include "philo_lib.h"

void display_message(t_simulation *sim, t_philosopher *philo, int message_type);
long long get_current_time(void);

int main(int argc, char *argv[])
{
    t_simulation sim;

    if (!validate_input(argc, argv))
    {
        handle_input_error();
        return 1;
    }
    initialize_simulation(&sim, custom_atoi(argv[1]), argc, argv);
    pthread_mutex_lock(&sim.death_mutex);
    cleanup_simulation(&sim, sim.number_of_philosophers);
    return 0;
}

void display_message(t_simulation *sim, t_philosopher *philo, int message_type)
{
    pthread_mutex_lock(&sim->output_mutex);
    printf("%lld\t", (get_current_time() - sim->simulation_start_time));
    if (message_type == TOOK_FORK)
        printf("Philosopher %d has taken a fork\n", philo->philosopher_id);
    else if (message_type == EATING)
        printf("Philosopher %d is eating\n", philo->philosopher_id);
    else if (message_type == SLEEPING)
        printf("Philosopher %d is sleeping\n", philo->philosopher_id);
    else if (message_type == THINKING)
        printf("Philosopher %d is thinking\n", philo->philosopher_id);
    else if (message_type == DIED)
    {
        printf("Philosopher %d has died\n", philo->philosopher_id);
        cleanup_simulation(sim, sim->number_of_philosophers);
    }
    pthread_mutex_unlock(&sim->output_mutex);
}

long long get_current_time(void)
{
    struct timeval current_time;
    gettimeofday(&current_time, NULL);
    return (current_time.tv_sec * 1000LL + current_time.tv_usec / 1000LL);
}