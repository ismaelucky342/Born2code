#include "philo_lib.h"

int ft_isspace(char c)
{
    return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

int ft_atoi(const char *str)
{
    int num = 0;
    int sign = 1;

    while (ft_isspace(*str)) str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        int digit = *str - '0';
        if (num > (INT_MAX - digit) / 10)
        {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        num = num * 10 + digit;
        str++;
    }
    return num * sign;
}
