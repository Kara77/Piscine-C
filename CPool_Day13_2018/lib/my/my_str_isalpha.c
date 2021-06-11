/*
** EPITECH PROJECT, 2018
** isalpha
** File description:
** day06
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')) {
            return (0);
        } else {
            i++;
        }
    }
    return (1);
}