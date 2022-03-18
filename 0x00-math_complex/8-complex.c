#include "holberton.h"
/**
 * complex_from_mod_arg - update the real and the imaginary parts
 * of a complex number given its modulus and arguments
 * @m: modulus
 * @arg: argument
 * @c3: pointer to the struct c for keep the answer
 * Return: no return
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	if (c3)
	{
		c3->re = m * sqrt(1 / (pow((tan(arg)), 2) + 1));
		c3->im = tan(arg) * c3->re;
	}
}
