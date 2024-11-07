/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:46:47 by ismherna          #+#    #+#             */
/*   Updated: 2024/11/02 19:40:07 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_BONUS_H
# define PHILO_BONUS_H

# define G "\033[0;32m"
# define NC "\033[0m"
# define R "\033[0;31m"
# define Y "\033[0;33m"

# include <fcntl.h>
# include <pthread.h>
# include <semaphore.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <sys/wait.h>
# include <unistd.h>

typedef struct s_philo
{
	int			id;
	int			*dead_flag;
	int			times_eaten;
	pid_t		pid;
}				t_philo;

typedef struct s_data
{
	pthread_t	monitor_thread;
	int			dead_flag;
	int			eat_flag;
	int			num_of_meals;
	int			num_of_philo;
	sem_t		*dead_semaphore;
	sem_t		*eat_semaphore;
	sem_t		*forks;
	sem_t		*print_semaphore;
	size_t		last_meal;
	size_t		start_time;
	size_t		time_to_die;
	size_t		time_to_eat;
	size_t		time_to_sleep;
	t_philo		*philo;
}				t_data;

int				check_valid_args(int argc, char *argv[]);

void			start_philo(t_data *data, char *argv[]);
void			create_processes(t_data *data);
void			*monitor(void *data);
void			*routine(t_data *data);
void			check_alive(long long time, t_data *data, char *str);
long			ft_atol(const char *str);
void			printf_with_id_and_time(t_data *data, int id, char *str);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_itoa(int n);
long long		ft_get_time(void);
int				ft_usleep(size_t milliseconds);
void			hitman(t_data *data);
int				check_content_args(char *argv);
int				check_num_args(int argc);
int				check_max_min(char *argv);
int				check_valid_args(int argc, char *argv[]);
int				ft_strlen(const char *str);

#endif