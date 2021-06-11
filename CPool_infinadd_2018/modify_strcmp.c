/*
** EPITECH PROJECT, 2018
** strcmp
** File description:
** 
*/

int modify_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0') {
        if (s1[i] > s2[i]) {
            return (1);
        } else if (s1[i] < s2[i]) {
            return (-1);
        }
        i++;
    }
    if (s2[i] != '\0') {
        return (-1);
    } else
        return (0);
}