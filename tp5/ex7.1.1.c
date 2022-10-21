#include <stdio.h>
void main()
{
	int n, i, f;
	printf("entre un nombre");
	scanf("%d", &n);
	f = calculeFactoriele(n);
	printf("le factorielle de %d=%d", n, f);
}
int calculeFactoriele(int n)
{
	int f = 1, i;
	for (i = 1; i <= n; i++)
	{
		f = f * i;
	}
	return f;
}