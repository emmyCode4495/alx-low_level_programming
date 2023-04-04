#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - print the sum of th two diagonal
 *of a square mTRIX
 *@a: the varaible for the matrix of the intger
 *@size: the variable to generate the matrix
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int iIndex;
	int firstSum = 0;
	int secondSum = 0;

	for (iIndex = 0; iIndex < size; iIndex++)
	{
		firstSum += a[iIndex];
		a += size;
	}

	a -= size;

	for (iIndex = 0; iIndex < size; iIndex++)
	{
		secondSum += a[iIndex];
		a -= size;
	}

	printf("%d, %d\n", firstSum, secondSum);


}
