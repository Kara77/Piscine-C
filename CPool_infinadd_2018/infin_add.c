/*
** EPITECH PROJECT, 2018
** infin_add
** File description:
** infin add
*/

#include "include/my.h"
#include <stdlib.h>

int biggest_char(int length_ch1, int length_ch2)
{
    if (length_ch1 >= length_ch2) {
        return (length_ch1);
    } else if (length_ch2 >= length_ch1) {
        return (length_ch2);
    }
}

char *complete(int length_max, int length_min, char *ch1, char *ch2)
{   
    char *str_complete;
    if (length_max > length_min) {
        str_complete = my_strdup(ch2);
        str_complete = malloc(sizeof(char) * (length_min + 1));
        while (length_min < length_max) {
            length_min++;
            str_complete[length_min] = 0;
        }
    }
    return (str_complete);
}

char *infin_add(char *ch1, char *ch2, int i, int carry)
{
    int length_ch1 = my_strlen(ch1) - 1;
    int length_ch2 = my_strlen(ch2) - 1;
    int siz e_memory = biggest_char(length_ch1, length_ch2) + 1;
    char *ch3 = malloc(sizeof(char) * (size_memory + 2));

    while (i != size_memory) {
        if ((ch1[i] + ch2[i] - 48 + carry) > 57) {
            ch3[i] = ch1[i] + ch2[i] - 58 + carry;
            carry = 1;
        } else {
            ch3[i] = ch1[i] + ch2[i] - 48 + carry;
            carry = 0;
        }
        i++;
    }
    if (carry == 1)
        my_putstr("1");
    my_revstr(ch3);
    return (ch3);
}

int main(int argc, char *argv[])
{
    if (argc > 3)
        return (0);
    int iterator = 0;
    int carry = 0;
    my_revstr(argv[1]);
    my_revstr(argv[2]);
    my_putstr(infin_add(argv[1], argv[2], iterator, carry));
    return (0);
}