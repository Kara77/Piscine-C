/*
** EPITECH PROJECT, 2018
** number*
** File description:
** convert char en int
*/

#include "include/my.h"
#include <stdlib.h>

int summands(char **str);

int ini_multiplicator(char *str)
{
    int i = 0;
    int multiplicator = 1;

    while(str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9' && i == 0) {
           i++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            i++;
            multiplicator = multiplicator * 10;
        } else { 
            return (multiplicator);
        }
    }
    return (multiplicator);
}

int number(char **str)
{
    int multiplicator = ini_multiplicator(*str);
    int integer = 0;
    int neg = 1;

    if (*str[0] == '(') {
        (*str)++;
        if (*str[0] == '-') {
            neg = -1;
            (*str)++;
        } else 
            return (summands(str));
    }
    while (*str[0] >= '0' && *str[0] <= '9' ) {
        integer = integer + (*str[0] - 48) * multiplicator;
        multiplicator = multiplicator / 10;
        (*str)++;
    }
    if (neg == (-1))
        (*str)++;
    return (integer * neg);
}

int factors(char **str)
{
    int res = 0;

    res = number(str);
    while (*str[0] == '*' || *str[0] == '/' || *str[0] == '%') {
        if (*str[0] == '*') {
            (*str)++;
            res = res * number(str);
        } else if (*str[0] == '/') {
            (*str)++;
            res = res / number(str);
        } else {
            (*str)++;
            res = res % number(str);
        }
    }
    if (*str[0] == ')')
        (*str)++;
    return (res);
}

int summands(char **str)
{
    int res = 0;

    res = factors(str);
    while (*str[0] == '+' || *str[0] == '-') {
        if (*str[0] == '+') {
            (*str)++;
            res = res + factors(str);
        } else {
            (*str)++;
            res = res - factors(str);
        }
    }
    if (*str[0] == ')')
        (*str)++;
    return (res);
}