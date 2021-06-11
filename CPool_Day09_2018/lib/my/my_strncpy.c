/*
** EPITECH PROJECT, 2018
** task02day06
** File description:
** strncspy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while(i < n) {
        dest[i] = src[i];
        i++;
    }
    if (n > i) {
    dest[i] = '\0';
    }
    return (dest);
}