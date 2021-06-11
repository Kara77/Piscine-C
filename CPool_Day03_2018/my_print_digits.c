/*
** EPITECH PROJECT, 2018
** task03
** File description:
** digital acsending
*/

void my_putchar(char c);

int my_print_digits(void)
{
    char i = 48;
    
    while (i <= 57) {
        my_putchar(i);
        i++;
    }
    return (0);
}
