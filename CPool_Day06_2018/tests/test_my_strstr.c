/*
** EPITECH PROJECT, 2018
** testTask04Day06
** File description:
** strstrTest
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, compare_two_char1)
{
    char str[] = "abcdefgh";
    char to_find[] = "def";

    cr_assert_str_eq(my_strstr(str,to_find) ,"defgh");
}