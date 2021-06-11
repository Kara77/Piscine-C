/*
** EPITECH PROJECT, 2018
** my_list_size
** File description:
** task02day11
*/

#include "include/mylist.h"
#include "include/my.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
    if (begin == NULL)
        return (0);
    return (my_list_size(begin->next) + 1);
}