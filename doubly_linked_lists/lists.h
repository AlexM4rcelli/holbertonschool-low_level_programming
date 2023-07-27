# ifndef MAIN
# define MAIN
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_list(const dlistint_t *h);
size_t list_len(const dlistint_t *h);
dlistint_t *add_node(dlistint_t **head, const char *str);
dlistint_t *add_node_end(dlistint_t **head, const char *str);
void free_list(dlistint_t *head);
# endif
