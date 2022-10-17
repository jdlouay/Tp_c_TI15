#include <stdio.h>
void main()
{
	int x, q, r, i, j;
	int b[10];
	printf("donne un entier positif : ");
	scanf("%d", &x);
	i = 1;
	q = x;
	do
	{
		b[i] = q % 2;
		q = q / 2;
		i++;
	} while (q > 0);
	printf("Donc le nombre decimal %d vaut ", x);
	for (j = 1; j < i; j++)
	{
		printf("%d", b[j]);
	}
	printf(" en binaire.");
}
