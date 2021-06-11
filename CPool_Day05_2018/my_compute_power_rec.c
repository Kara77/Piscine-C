/*
** EPITECH PROJECT, 2018
** task04day05
** File description:
** 
*/

#include <unistd.h>

void my_putchar(char c);

int my_compute_power_rec(int nb, int p)
{
    if ((nb == 0 && p == 0) || p == 0) {
        return (1);
    } else if (nb == 0 || p < 0) {
        return (0);
    } else {
        return my_compute_power_rec(nb, p - 1) * nb;
    }
}
