#ifndef CODEXION_H
# define CODEXION_H

# include <pthread.h>

typedef struct s_dongle
{
    pthread_mutex_t     lock;
    pthread_cond_t      cond;
    int                 in_use;
    long                available_at;
}   t_dongle;

typedef struct s_coder
{
    int    id;
    pthread_t       thread;
    t_dongle        *left;
    t_dongle        *right;
    long            last_compile;
    pthread_mutex_t state_lock;
}   t_corder;

typedef struct s_config
{
    int     num_coders;
    long    time_burn;
    long    time_compile;
    long    time_debug;
    long    time_refactor;
    int     num_compiles;
    long    time_cooldown;
    int     schedule;
}   t_config;



int parse_args(int argc, char **argv, t_config *configs);


# endif