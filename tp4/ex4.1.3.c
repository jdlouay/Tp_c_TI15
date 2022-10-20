#include <stdio.h>
void main()
{
	int n, i, occ, Tocc[10], taille, y, index, j;
	do
	{
		printf("donner le taille du tableu ");
		scanf("%d", &n);
	} while (n <= 2 || n >= 100);
	int t[n];
	for (i = 1; i <= n; i++)
	{
		do
		{
			printf("donner un entier postif et inferieure a 10\n t[%d]= \n", i);
			scanf("%d", &t[i]);
		} while (t[i] < 0 || t[i] > 10);
	}
	for (i = 1; i < 11; i++)
	{
		occ = 0;
		for (j = 1; j < n; j++)
		{
			if (i == t[j])
				occ++;
		}
		Tocc[i] = occ;
	}
	taille = 0;
	for (i = 1; i <= 10; i++)
	{
		taille += Tocc[i];
	}
	int tt[taille];
	index = 1;
	for (i = 10; i >= 1; i--)
	{
		if (Tocc[i] != 0)
		{
			y = Tocc[i];
			do
			{
				tt[index] = i;
				index++;
				y--;
			} while (y != 0);
		}
	}
	printf("[");
	for (j = 1; j <= taille; j++)
	{
		printf(" %d ", tt[j]);
		if (j != taille)
			printf(",");
	}
	printf("]");
}