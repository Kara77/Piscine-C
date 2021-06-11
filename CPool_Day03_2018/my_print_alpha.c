/*
** EPITECH PROJECT, 2018
** task01
** File description:
** alphabet
*/

void my_putchar(char c);

int my_print_alpha(void)
{
    int i = 97;
    
    while (i <= 122) {
         my_putchar(i);
         i++;
    }
    return (0);
}
