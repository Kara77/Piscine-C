/*
** EPITECH PROJECT, 2018
** test strncmp
** File description:
** 
*/

#include <criterion/criterion.h>

char my_strcmp(char *s1, char *s2, int n);

Test(my_strcmp, compare_s1_s2_n_first_cases)
{
    char s1[] = "abc";
    char s2[] = "abc";

    cr_assert_eq(my_strcmp(s1,s2, 5), 0);
}

Test(my_strcmp, compare_s1_s2_n_first_cases2)
{
    char s1[] = "abce";
    char s2[] = "abcd";
 
    cr_assert_eq(my_strcmp(s1,s2, 4), 1);
}