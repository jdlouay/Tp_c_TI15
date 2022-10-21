#include <stdio.h>
void main()
{
	int n, i, f;
	printf("entre un nombre");
	scanf("%d", &n);
	f = 1;
	for (i = 1; i <= n; i++)
	{
		printf("%d,%d\n", i, f);

		f = f * i;
	}
	printf("le factorielle de %d=%d", n, f);
}
