/*
** EPITECH PROJECT, 2018
** task03day06
** File description:
** revstr
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

int my_strlen(char const *str);

Test(my_revstr, return_value_is_reversed)
{
    char *a = "Hello";
    char *b = strdup(a);

    cr_assert_str_eq(my_revstr(b), "olleH");
}