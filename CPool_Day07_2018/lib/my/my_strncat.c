/*
** EPITECH PROJECT, 2018
** task03day07
** File description:
** 
*/

char *my_strncat(char *dest, char const *src, int nb)
{    
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while(j != nb && src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}