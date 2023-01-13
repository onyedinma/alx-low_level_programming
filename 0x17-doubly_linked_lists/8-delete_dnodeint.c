#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of linked list
 * @index:  index of the node that should be deleted
 * Return: 1 if success and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
    dlistint_t *current = *head;
    unsigned int i;

    if (*head == NULL) {
        return (-1);
    }

    if (index == 0) {
        *head = current->next;
        if (current->next != NULL) {
            current->next->prev = NULL;
        }
        free(current);
        return (1);
    }

    for (i = 0; i < index; i++) {
        if (current->next == NULL) {
            return (-1);
        }
        current = current->next;
    }

    if (current->prev != NULL) {
        current->prev->next = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    free(current);

    return (1);
}

