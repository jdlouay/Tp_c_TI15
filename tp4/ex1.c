 #include<stdio.h>

	void main()
{
	float T[12];
	int i, Tmax, Tmin, Tmoy;

	printf("veuillez saisir les elements du tbleu \n");

	for (i = 1; i <= 12; i++)
	{
		printf("T[%d]= ", i);
		scanf("%f", &T[i]);
	}
	Tmin = T[0];
	for (i = 1; i < 12; i++)
	{
		if (Tmin > T[i])
			Tmin = T[i];
	}
	Tmax = T[0];
	for (i = 1; i <= 12; i++)
	{
		if (T[i] > Tmax)
			Tmax = T[i];
	}
	Tmoy = Tmin + Tmax / 2;

	printf("le min des element est:%d,  \n", Tmin);
	printf("le max des element est:%d, \n", Tmax);
	printf("le moy des element est:%d", Tmoy);
}