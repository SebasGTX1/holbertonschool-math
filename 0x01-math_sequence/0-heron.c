#include "heron.h"
/**
 * _sqrt - aproximates to sqrt of n and returns it
 * @x: number to calculate sqrt
 * @y: aproximation to sqrt
 * Return: sqrt of x
 */
double _sqrt(double number)
{
	double temp = 0, sqrt;

	sqrt = number / 2;

	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (number / temp + temp) / 2;
	}
	return (sqrt);
}
/**
 * _decimals - find the fake round for two doblue match
 * @elt: number to be check to the error
 * @p: b argument of the heron secuence
 * Return: 1 if the error if equal or less that 10^-7
 * 0 if not
 */
int _decimals(double elt, double p)
{
	int i = 0;
	double convergence = _sqrt(p);

	for (; i < 7; i++)
	{
		if ((int) elt % 10 != (int) convergence % 10)
			return (0);
		elt *= 10, convergence *= 10;
	}

	return (1);
}
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
	new_h->next = *head;
	*head = new_h;
	if ((_decimals(new_h->elt, p) == 0))
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
