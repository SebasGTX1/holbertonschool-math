#include<stdio.h>
#include<math.h>
/**
 * main - Fucntion tha calculate the slope of cosh
 * Return: Nothing
 */
int main(void)
{
	FILE *fp = NULL;
	double x, y;

	fp = fopen("cosh.txt", "w");
	for (x = 0.0000; x <= 6 * M_PI; x = x + 0.001)
	{
		y = sinh(x);
		fprintf(fp, "%lf\t%lf\n", x, y);
	}
}
