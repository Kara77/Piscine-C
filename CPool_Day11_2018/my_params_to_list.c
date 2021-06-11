/*
** EPITECH PROJECT, 2018
** my_params_to_list
** File description:
** task01day11
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

linked_list_t *add_element(linked_list_t *previous, void *data)
{
    linked_list_t *element = malloc(sizeof(linked_list_t));
    element->data = data;
    element->next = previous;
    return(element);
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;
    int i = 0;

    while (i < ac) {
        list = add_element(list, av[i]);
        i++;
    }
    return (list);
}