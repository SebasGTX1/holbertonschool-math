#include "heron.h"
/**
 * add_node - adds a new node at the end of the list
 * @head: head of the linked list
 * @p: b parameter on the heron secuence
 * @x0: First parameter of the heron secuence (1)
 * Return: address to the head
 */

t_cell *add_end(t_cell **head, double p, double x0)
{
	t_cell *new_h;
	double pUn = 0;
	double error = 1 / 10000000;

	new_h = malloc(sizeof(t_cell));
	if (!new_h)
	{
		free(new_h);
		return (NULL);
	}

	if (!*head)
		new_h->elt = x0;
	else
		new_h->elt = (0.5) * (x0 + (p / x0));

	if (*head)
		pUn = (*head)->elt;
	new_h->next = *head;
	*head = new_h;
	if ((pUn - new_h->elt) != error || new_h->elt == 1)
		add_end(head, p, new_h->elt);
	return (*head);
}
/**
 * heron - funtion that returns the heron secuence
 * with an error less than 10 ^ -7
 * @p: b parameter on the heron secuence
 * @x0: First parameter of the heron secuence (1)
 * Return: a linked list with the heron secuence
 *
 */

t_cell *heron(double p, double x0)
{
	t_cell *head;

	head = NULL;

	return (add_end(&head, p, x0));
}
