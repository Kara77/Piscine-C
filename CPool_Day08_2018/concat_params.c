/*
** EPITECH PROJECT, 2018
** task02day08
** File description:
** 
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

char *my_modify_strcat(char *dest, char const *src)
{    
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while(src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\n';
    dest[i + 1] = '\0';
    return (dest);
}

char *concat_params(int argc, char **argv)
{
	int i = 0;
    int size_memory = 0;
    
    while (i < argc) {
        size_memory = size_memory + my_strlen(argv[i]);
        i++;
    }
    char *str = malloc(sizeof(char) * (size_memory + i));
    i = 0;

    while (i < argc) {
        *my_modify_strcat(str, argv[i]);
        i++;
    }
    return (str);
}