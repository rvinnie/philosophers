#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <pthread.h>

typedef struct
{
	pthread_t		philo;
	unsigned int	philo_num;
	unsigned int	left_fork;
	unsigned int	right_fork;
	unsigned int	eat_count;
}	t_philo;

typedef struct
{
	t_philo			*s_philos;
	pthread_mutex_t	*forks;
	unsigned int	num_of_philos;
	unsigned int	time_to_die;
	unsigned int	time_to_eat;
	unsigned int	time_to_sleep;
	unsigned int	num_must_eat;
}	t_main;


int		ft_strlen(char *str);
int		put_error(char *err);
long	get_cur_time(void);