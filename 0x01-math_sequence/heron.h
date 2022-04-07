#ifndef _heron_
#define _heron_
#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @elt: elt number
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	double elt;
	struct list_s *next;
} t_cell;

t_cell *heron(double p, double x0);
#endif
