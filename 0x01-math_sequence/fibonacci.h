#ifdef _fibonacci_
#define _fibonacci_
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

t_cell *Fibonnaci(); double gold_number(t_cell *head);
#endif
