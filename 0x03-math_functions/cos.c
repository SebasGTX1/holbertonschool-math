#include<stdio.h>
#include<math.h>
/**
 * main - Fucntion tha calculate the slope of cos
 * Return: no return
 */
int main(void)
{
	FILE *fp = NULL;
	double x, y;

	fp = fopen("cos.txt", "w");
	for (x = 0.0000; x <= 6 * M_PI; x = x + 0.001)
	{
		y = -(1) * sin(x);
		fprintf(fp, "%lf\t%lf\n", x, y);
	}
	return (0);
}
