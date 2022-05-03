#include<stdio.h>
#include<math.h>
/**
 * main - Fucntion tha calculate the slope of tan
 * Return: Nothing
 */
int main(void)
{
	FILE *fp = NULL;
	double x, y, r;

	fp = fopen("tan.txt", "w");
	for (x = ((-1) * M_PI); x <= 6 * M_PI; x = x + 0.001)
	{
		r = exp(cos(x));
		y = 1 / r;
		fprintf(fp, "%lf\t%lf\n", x, y);
	}
}
