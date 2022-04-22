#include "holberton.h"
#define MAXCOUNT 255
#define length 1000
#define width 1000
/**
 * _free - frees the columns of a image matrix
 * @image: image matrix
 * @columns: columns of the image matrix
 */
void _free(int **image, int columns)
{
	for (columns--; columns >= 0; columns--)
		free(image[columns]);
}
/**
 * main - The Mandelbrot’s set is the set of complex numbers c
 * Return: Always 0
 */
int main(void)
{
	int i = 0, x = 0, y = 0, **image;
	double tmpx;
	complex z, c;
	FILE *pgmimg;

	image = malloc(length * sizeof(int));
	if (image)
	{
	for (; y < length; y++)
	{
		image[y] = malloc(width * sizeof(int));
		if (!image[y])
		{
			_free(image, y);
			return (0);
		}
		for (; x < width; x++)
		{
			c.re = (x - width / 2) * 4.0 / width, c.im = (y - length / 2) * 4.0 / width;
			z.re = 0, z.im = 0, i = 0;
			while (((z.re * z.re + z.im * z.im) < 4) && (i < MAXCOUNT))
			{
				tmpx = z.re * z.re - z.im * z.im + c.re;
				z.im = 2 * z.re * z.im + c.im, z.re = tmpx, i++;
			} image[y][x] = i;
		}
	}
	pgmimg = fopen("mandelbrot.pgm", "wb"), fprintf(pgmimg, "P2\n");
	fprintf(pgmimg, "%d %d\n", width, length), fprintf(pgmimg, "255\n");
	for (x = 0; x < length; x++)
	{
		for (y = 0; y < width; y++)
			fprintf(pgmimg, "%d ", image[x][y]); /*Copy gray value from array to file*/
		fprintf(pgmimg, "\n");
	}
	_free(image, y);
	}
	free(image);
	fclose(pgmimg);
	return (0);
}
