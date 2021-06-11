/*
** EPITECH PROJECT, 2018
** task04day06
** File description:
** strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        while (str[i+j] == to_find[j]) {
            j++;
            if (to_find[j] == '\0') {
                return (str+i);
            }
        }
        i++;
        j = 0;
    }
    return ('\0');
}