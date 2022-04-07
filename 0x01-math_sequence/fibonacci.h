#ifndef _fibonacci_
#define _fibonacci_
#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @elt: numberof the secuence
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	int elt;
	struct list_s *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);
#endif
