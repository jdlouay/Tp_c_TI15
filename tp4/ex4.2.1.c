#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, j;
	int l, c, a, b;
	do
	{
		printf("entre le nombre de linge  ");
		scanf("%d", &l);
	} while (l > 100);
	do
	{
		printf("entre le nombre de colones  ");
		scanf("%d", &c);
	} while (c > 100);
	int A[l][c], B[l][c], R[l][c];
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			A[i][j] = rand(1, 1000);
			B[i][j] = rand(1, 1000);
		}
	}

	printf("saisir un entier");
	scanf("%d", &a);
	printf("saisir un entier");
	scanf("%d", &b);
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			R[i][j] = a * A[i][j] + b * b[i][j];
		}
	}
}
