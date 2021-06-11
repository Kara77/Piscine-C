/*
** EPITECH PROJECT, 2018
** treeProject
** File description:
** Source file of treeProject
*/

#include <unistd.h>

void my_putchar(char c);

void tree(int size)
{
    if (size > 0) {
        for(int j = 0; j < size; j++) {
            my_putchar('|');
        }
    }
}