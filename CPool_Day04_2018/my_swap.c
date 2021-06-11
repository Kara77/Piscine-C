/*
** EPITECH PROJECT, 2018
** task01day04
** File description:
** swap two integers
*/

#include <unistd.h>

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
