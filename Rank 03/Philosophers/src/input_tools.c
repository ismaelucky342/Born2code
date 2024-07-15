#include "philo_lib.h"

int check_input(int argc, char *argv[])
{
    if (argc != 5 && argc != 6)
        return 0;

    for (int i = 1; i < argc; i++)
    {
        if (!is_number(argv[i]))
            return 0;

        int val = atoi(argv[i]);

        if (val <= 0 || val > INT_MAX)
            return 0;

        if (i == 1 && val > MAX_PHILOS)
            return 0;

        if ((i == 2 || i == 3 || i == 4) && val < 60)
            return 0;
    }

    return 1;
}

int is_number(const char *str)
{
    if (!str || *str == '\0') return 0;
    if (*str == '-' || *str == '+') str++;
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

void	input_error(void)
{
	printf("Fatal error on input.\n");
}