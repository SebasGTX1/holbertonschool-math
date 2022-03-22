#include "holberton.h"
/**
 * division - divides two complex
 * @c1: complex 1
 * @c2: complex 2
 * @c3: result struct
 * Return: No return
 */

void division(complex c1, complex c2, complex *c3)
{

	double den = (c2.re * c2.re) + (c2.im * c2.im);

	c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) / den;
	c3->im = ((c1.re * -c2.im) + (c2.re * c1.im)) / den;
}

