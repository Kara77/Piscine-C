/*
** EPITECH PROJECT, 2018
** str isnum
** File description:
** 
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            return (0);
        } else {
            return (1);
        }
        i++;
    }
}