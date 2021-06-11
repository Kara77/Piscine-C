/*
** EPITECH PROJECT, 2018
** task02Day3
** File description:
** alphabet à l'envers
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    char i = 122;
    
    while (i >= 97) {
        my_putchar(i);
        i--;
    }
    return (0);
}
