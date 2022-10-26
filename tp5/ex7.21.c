
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char chaine[10];
	char lettre;
	int i, app;
	printf("entre une chaine caractere\n");
	scanf("%s", &chaine);
	printf("entre une lettre\n");
	scanf("%c", &lettre);
	app = 0;
	for (i = 0; i <= strlen(chaine); i++)
	{
		if (lettre == chaine[i])
		{
			app++;
		}
	}
	printf("Le nombre Apparition de %s est %d\n", chaine, app);
}
