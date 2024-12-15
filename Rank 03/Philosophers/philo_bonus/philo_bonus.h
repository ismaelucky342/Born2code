/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:07:13 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/14 15:03:01 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_BONUS_H
# define PHILO_BONUS_H

# include <fcntl.h>
# include <pthread.h>
# include <semaphore.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>
# include <unistd.h>

# define RE "\033[0m"
# define R "\033[31m"
# define G "\033[32m"
# define G2 "\033[92m"
# define Y "\033[33m"
# define B "\033[34m"
# define MG "\033[35m"
# define CY "\033[36m"

typedef struct s_philo
{
	int				pid;
	int				count_eat;
	long long		last_eat;
	struct s_data	*d;
	pid_t			id;
	pthread_t		wait;
	sem_t			*stop_eat;
}					t_philo;

typedef struct s_data
{
	int				num_of_philo;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				num_of_times_each_philo_must_eat;
	long long		time_start;
	t_philo			*philo;
	sem_t			*fork;
	sem_t			*print;
	sem_t			*mutex;
	sem_t			*somebody_dead;
}					t_data;

int					ft_free(t_data *d);
int					ft_parsing(int argc, char **argv, t_data *d);
long				ft_atol(const char *str);
int					ft_init(t_data *d);
long long			ft_current_time(void);
char				*ft_sem_name(char const *base, char *name, int pos);
int					ft_strcpy(char *dst, const char *src);
int					ft_routine(void *philo_v);
void				ft_output(t_data *d, int pid, char *msg);
void				ft_usleep(int time);
int					ft_error_arg(int argc);

#endif