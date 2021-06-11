/*
** EPITECH PROJECT, 2018
** Evalxpr
** File description:
** make calcul with parenthese
*/

#include "include/my.h"
#include <stdlib.h>

int summands(char **str);

int eval_expr(char const *str)
{
    char **p_cpy = malloc(sizeof(char) * my_strlen(str));

    *p_cpy = my_strdup(str);
    return (summands(p_cpy));
}