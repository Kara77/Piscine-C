/*
** EPITECH PROJECT, 2018
** task02day05
** File description:
** recursive fact
*/

#include <unistd.h>

void my_putchar(char c);

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb >= 13) {
        return (0);
    } else if (nb == 0) {
        return (1);
    } else {
        return my_compute_factorial_rec(nb - 1) * nb;
    }
}
