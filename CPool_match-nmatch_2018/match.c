/*
** EPITECH PROJECT, 2018
** matchnmatch
** File description:
** projet2 
*/

#include "include/my.h"

int match(char const *s1, char const *s2)
{
    int i = 0;
    
    while (s1[i] != '\0') {
        if (s1[i] == s2[i]) {
        i++;
        } else {
            return (0);
        }
    }
    return (1);
}