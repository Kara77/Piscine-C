/*
** EPITECH PROJECT, 2018
** task03day05
** File description:
** compute power
*/

#include <unistd.h>

void my_putchar(char c);

int my_compute_power_it(int nb, int p)
{
    if ((nb == 0 && p == 0) || p == 0) {
        return (1);
    } else if (nb == 0 || p < 0) {
        return (0);
    }
    int res = 1;

    for(int i = 1; i <= p; i++) {
        res = nb * res;
    }
    return (res);
}
