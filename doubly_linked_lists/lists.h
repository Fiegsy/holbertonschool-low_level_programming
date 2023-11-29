#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Overview: Singly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
} dlistint_t;

/**
 * struct listp_s - singly linked list
 * @p: pointers of nodes
 * @next: points to the next node
 *
 * Description: singly linked list of pointers
 */
typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
