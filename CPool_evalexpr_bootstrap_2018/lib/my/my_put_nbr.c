/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** print a int number
*/
#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int p = 1;

    if (nb < 10) {
        my_putchar(nb + '0');
            return (0);
    }
    while (nb / p != 0) {
        p *= 10;
    }
    p = p / 10;
    my_putchar((nb / p) + '0');
    return (my_put_nbr(nb - (nb / p) * p));
}