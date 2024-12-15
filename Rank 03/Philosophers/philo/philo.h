/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:37:15 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/11 17:43:39 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <unistd.h>

# define COLOR_RESET "\033[0m"
# define COLOR_R "\033[31m"
# define COLOR_G "\033[32m"
# define COLOR_Y "\033[33m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_CYAN "\033[36m"

# define FORK 1
# define EAT 2
# define SLEEP 3
# define THINK 4
# define MUTEX_EXTRA 4

typedef struct s_mutex
{
	pthread_mutex_t	*mutex_fork;
	pthread_mutex_t	*mutex_extra;
}					t_mutex;

typedef struct s_input
{
	int				total_philos;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				count_meals_required;
}					t_input;

typedef struct s_global_info
{
	int				philo;
	int				*dead;
	long long		last_ate;
	long long		start_time;
	int				*number_eats;
	t_input			params;
	pthread_mutex_t	*fork;
	pthread_mutex_t	*mutex_to_print;
	pthread_mutex_t	*mutex_to_dead;
	pthread_mutex_t	*mutex_to_eats;
	pthread_mutex_t	*mutex_l_ate;
}					t_global_info;

int					ft_allocate(pthread_t **th, t_global_info **info,
						t_mutex *mtx, t_input prms);
long				ft_atol(const char *str);
int					ft_isdigit(int c);
void				*philo_routine(void *arg);
long long			ft_get_time(void);
void				ft_usleep(long long wait, t_global_info *data);
void				*routine_monitor(void *arg);
int					verify_dead(t_global_info *data);
int					checker_dead(t_global_info *data);
void				ft_print(t_global_info *data, int action);
void				ft_print_death(t_global_info *data);
int					check_args(char **argv);
void				init_params(char **argv, t_input *arg, int argc);
int					init_mutex(t_mutex *mutex, int n);
int					ft_superman(pthread_t *th, t_global_info *data);
int					init_g_info(t_global_info *data, t_mutex mutex,
						t_input arg);

#endif
