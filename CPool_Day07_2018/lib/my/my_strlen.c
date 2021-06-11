/*
** EPITECH PROJECT, 2018
** task03Day04
** File description:
** strlen
*/

#include <unistd.h>

int my_strlen(char const *str);

void my_putchar(char c);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}