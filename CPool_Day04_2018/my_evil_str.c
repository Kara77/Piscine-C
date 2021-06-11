/*
** EPITECH PROJECT, 2018
** task04Day04
** File description:
** evil
*/

#include <unistd.h>

void my_putchar(char c);

int my_newputstr(char const *str)
{
    int i = 0;
 
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (0);
}

int my_newstrlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_evil_str(char *str)
{	
    int finTab = my_newstrlen(str) - 1;
    int debutTab = 0;
    int temp = 0;

    while (debutTab < finTab) {
        temp = str[debutTab];
        str[debutTab] = str[finTab];
        str[finTab] = temp;
        debutTab = debutTab + 1;
        finTab = finTab - 1;
    }
    return (str);
}
