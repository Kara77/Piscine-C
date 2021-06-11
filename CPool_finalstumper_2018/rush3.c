/*
** EPITECH PROJECT, 2018
** rush3
** File description:
** rush3
*/

#include <unistd.h>
#include "../include/my.h"

int display_result(int argc, char *argv)
{
    int i = 0;

    my_putchar('[');
    while (i < 2) {
	(*argv)++;
	i++;
    }
    my_putstr(argv);
    my_putchar(']');
    my_putchar(' ');
    return (0);
}

int main (int argc, char **argv)
{
    display_result(argc, argv[0]);
}
