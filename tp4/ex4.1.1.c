#include <stdio.h>

void main()
{
	float Tmin[12], Tmax[12], Tmoy[12];
	int i;

	printf("Donnez les températures maximales de la région de Nabeul pendant 12 mois de l’année 2020 \n");

	for (i = 1; i <= 12; i++)
	{
		printf("température maximale de %d/2022= \n", i);
		scanf("%f", &Tmax[i]);
	}
	printf("Donnez les températures minimales de la région de Nabeul pendant 12 mois de l’année 2020 \n");
	for (i = 1; i <= 12; i++)
	{
		printf("température minimale de %d/2022= \n", i);
		scanf("%f", &Tmin[i]);
	}

	for (i = 1; i < 12; i++)
	{
		Tmoy[i] = (Tmax[i] + Tmin[i]) / 2;
		printf("température moyenne de %d/2022= %f \n", i, Tmoy[i]);
	}
}