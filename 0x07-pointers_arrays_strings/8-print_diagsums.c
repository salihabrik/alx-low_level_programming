#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, n1 = 0, n2 = 0;

	for (i = 0; i < size; i++)
	{
	n1 += *(a + i * size + i);
	n2 += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d\n", n1, n2);
}
