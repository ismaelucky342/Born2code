#ifndef PHILO_LIB_H
#define PHILO_LIB_H

//LIBRARIES
# include <unistd.h>
# include <stdlib.h>
# include <limits.h> 
# include <sys/time.h>
# include <pthread.h>
# include <limits.h>
# include <string.h>
# include <stdio.h>

//DEFINE AREA
# define MAX_NUM_PHILOSOPHERS 200

//STRUCTRES AREA
typedef struct s_simulation
{
	int				simulation_end_flag;
	pthread_mutex_t	death_mutex;
	size_t			number_of_philosophers;
	t_philosopher	philosophers[MAX_NUM_PHILOSOPHERS];
	long long		death_time_threshold;
	long long		eating_duration;
	pthread_mutex_t	meal_mutex;
	pthread_mutex_t	output_mutex;
	long long		sleeping_duration;
	pthread_mutex_t	fork_mutexes[MAX_NUM_PHILOSOPHERS];
	long long		required_meals;
	long long		simulation_start_time;
}					t_simulation;

typedef struct s_philosopher
{
	struct s_program	*pointer_program;
	ssize_t				left_fork;
	ssize_t				right_fork;
	int					number_meals_eaten;
	long long			last_meal;
	long long			time_remaining;
	pthread_t			processor_thread;
	int					thread_id;
	int					philo_eating;
	pthread_mutex_t		pause;
}						t_philosopher;

enum
{
    PHILOSOPHER_EAT,
    PHILOSOPHER_SLEEP,
    PHILOSOPHER_DIE,
    PHILOSOPHER_TOOK_FORK,
    PHILOSOPHER_THINK
}; 


//FUNCTIONS AREA
long long	get_current_time(void);
void		display_message(t_simulation *sim, t_philosopher *ph, int message_type);
int			validate_input(int argc, char *argv[]);
void		initialize_simulation(t_simulation *sim, int num_philosophers, int argc, char *argv[]);
void		*monitor_simulation(void *arg);
void		*philosopher_thread(void *arg);
void		execute_philosopher_actions(t_simulation *sim, t_philosopher *ph);
void		ft_usleep(int milliseconds);
void		handle_input_error(void);
void		exit_clean(t_simulation *p, int c);
int			ft_atoi(char *str);
void		ft_usleep(int ms);

#endif