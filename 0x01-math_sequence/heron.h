#ifdef _heron_
#define _heron_
#include <stdio.h>
#include <math.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} cell_t;

t_cell *heron(double p, double x0);
#endif
