/*
** EPITECH PROJECT, 2018
** Evalxpr
** File description:
** make calcul with parenthese
*/

#include "include/my.h"
#include <stdlib.h>

int eval_expr(char const *str);

int ini_multiplicator(char *str);

int number(char **str);

int factors(char **str);

int summands(char **str);

int main(int ac, char const *av[])
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}