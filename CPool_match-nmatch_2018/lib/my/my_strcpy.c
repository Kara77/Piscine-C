/*
** EPITECH PROJECT, 2018
** task01day06
** File description:
** strcpy
*/

char *my_strcpy(char *dest, char const *src)
{    
    int i = 0;

    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}