#include "fibonacci.h"

/**
 * gold_number - return the / of the last elements of the fibonnacci
 * secuence (with a geometric behavior)
 * @head: fibonacci secuence list
 * Return: the calculation of the gold number
 */
double gold_number(t_cell *head)
{
	t_cell *temp = head;
	double antepenultimate, latest;

	antepenultimate = temp->elt;
	temp = temp->next;
	latest = temp->elt;
	return (antepenultimate / latest);
}
/**
 * *add_end - adds a node at the end of a list
 * @head: linked list
 * @f1: first term of the fibonacci secuence
 * Return: the address of the new element, or NULL if it failed
 */
t_cell *add_node_end(t_cell **head, int f1)
{
	t_cell *new_h;
	int i = 0, prev = f1;

	for (; i < 20; i++)
	{
		new_h = malloc(sizeof(t_cell));
		if (!new_h)
		{
			free(new_h);
			return (NULL);
		}

		if (!*head || !(*head)->next)
			new_h->elt = f1;
		else
		{
			new_h->elt = f1 + prev;
			prev = f1;
			f1 = new_h->elt;
		}
		new_h->next = *head;
		*head = new_h;
	}
	return (*head);
}
/**
 * *Fibonnaci - fibonaccio secuence
 * Return: no rturn
 */
t_cell *Fibonnaci()
{
	t_cell *head;

	head = NULL;

	return (add_node_end(&head, 1));
}
