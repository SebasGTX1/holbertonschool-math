#include "holberton.h"

/**
 * print_double - print of double value
 * @b: double number to be printed
 * Return: nothing
 */
void print_double(double b)
{
	double b_decimal = b * 10;

	printf("%d", (int)b);

	if ((int)b_decimal % 10 != 0)
	{
		printf(".");
	}
	while ((int)b_decimal % 10 != 0)
	{
		printf("%d", (int)b_decimal % 10);
		b_decimal *= 10;
	}
}

/**
 * display_complex_number - Display a complex number
 * @c: struct complex
 * Return: no return
 */

void display_complex_number(complex c)
{

		print_double(c.re);

		if (c.im != 0)
		{
			if (c.im < 0)
			{
				printf(" - ");
				c.im *= -1;
			}

			else
			{
				printf(" + ");
			}
			if (c.im != 1)
			{
				print_double(c.im);
			}
			printf("i");
		}
		printf("\n");
}
