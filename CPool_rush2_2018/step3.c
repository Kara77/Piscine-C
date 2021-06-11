/*
** EPITECH PROJECT, 2018
** step2
** File description:
** 
*/

#include <unistd.h>
#include "bonus/my.h"
#include <stdio.h>

int find_alpha(char *str)
{
    int count = 0;
    for (int j = 0; str[j] != '\0'; j++) {
        if (str[j] <= 'z' && str[j] >= 'a' || str[j] <= 'Z' && str[j] >= 'A') {
            count++;
        }
    }
    return (count);
}

void display(char letter, int count, int nb_char)
{
    my_putchar(letter);
    my_putchar(':');
    my_put_nbr(count);
    my_putchar(' ');
    my_putchar('(');
    my_put_nbr((count * 10000 / nb_char) / 100);
    my_putchar('.');
    if (((count * 10000 / nb_char) % 100) < 10) {
        my_putchar('0');
    }
    my_put_nbr((count * 10000 / nb_char) % 100);
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');    
}

int occurence(int argc, char *argv[])
{
    int i = 0;
    int j = 2;
    int diff = 32;
    int count = 0;
    int frequence = 0;
    int nb_char = find_alpha(argv[1]);

    while (j < argc) {
        char letter = argv[j][0];
        if (letter >= 'a' && letter <= 'z')
            diff = -32;
        while (argv[1][i] != '\0') {
            if (argv[1][i] == letter || argv[1][i] == letter + diff) {
                count++;
            }
            i++;
        }
        i = 0;
        j++;
        diff = 32;
        display(letter, count, nb_char);
        count = 0;
    }
    return (0);
}

int main(int argc, char *argv[])
{   
    occurence(argc, argv);
    return (0);
}