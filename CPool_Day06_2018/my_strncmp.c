/*
** EPITECH PROJECT, 2018
** strncmp
** File description:
** 
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while(s1[i] != '\0') {
        i++;
    }
    while (s1[i] < n) {
        if(s1[i] > s2[i]) {
            return (1);
        } else if (s1[i] < s2[i]) {
            return (-1);
        }
        i++;
    }
    return (0);
} 