/*
** EPITECH PROJECT, 2018
** task03day08
** File description:
** 
*/
#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}

int my_modify_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

int my_show_word_array(char * const *tab)
{
    int i = 0;
    int memory_size = 0;

    while (tab[i] != 0) {
        memory_size = memory_size + 1;
        i++;
    }
    char *str = malloc(sizeof(char) * (memory_size + 1));
    int j = 0;

    while (j != i) {
        my_modify_strlen(tab[j]);
        my_putstr(tab[j]);
        j++;
        my_putchar('\n');
    }
    return (0);
}

int main(void)
{
    char *tab[] = { "Abc", "dazd", "azd", "daz ddd" };
    my_show_word_array(tab);
}