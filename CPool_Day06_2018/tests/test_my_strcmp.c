/*
** EPITECH PROJECT, 2018
** test task05
** File description:
** 
*/

#include <criterion/criterion.h>

char my_strcmp(char *s1, char *s2);

Test(my_strcmp, compare_s1_s2)
{
    char s1[] = "abcdefgh";
    char s2[] = "def";

    cr_assert_eq(my_strcmp(s1,s2), -1);
}