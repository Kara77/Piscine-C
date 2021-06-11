/*
** EPITECH PROJECT, 2018
** task03day06
** File description:
** revstr
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_revstr(char *str)
{
    int finTab = my_strlen(str) - 1;
    int debutTab = 0;
    int temp = 0;

    while (debutTab < finTab) {
        temp = str[debutTab];
        str[debutTab] = str[finTab];
        str[finTab] = temp;
        debutTab = debutTab + 1;
        finTab = finTab - 1;
    }
    return (str);
}