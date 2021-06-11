/*
** EPITECH PROJECT, 2018
** strdup
** File description:
** task01day08
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
    char *str;
    int taillesrc = my_strlen(src);
    str = malloc(sizeof(char) * (taillesrc + 1));
    
    my_strcpy(str, src);
    return (str);
}