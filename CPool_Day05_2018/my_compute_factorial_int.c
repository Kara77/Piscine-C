/*
** EPITECH PROJECT, 2018
** task01day05
** File description:
** compute factorial
*/

#include <unistd.h>

void my_putchar(char c);

int my_compute_factorial_it(int nb)
{
    int res = 1;
    if(nb < 0 || nb >= 13) {
        return (0);
    } else if (nb == 0) {
        return (1);
    }

    for(int i = 1; i <= nb; i++) {
        res = i * res;
    }
    return (res);
}