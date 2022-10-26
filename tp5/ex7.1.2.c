#include <stdio.h>
int c;
int addition(a + b)
{
	c = a + b;
	return c:
}
int soustraction(a - b)
{
	c = a - b;
	return c;
}
int division(a / b)
{
	c = a / b;
	return c;
}
int multiplication(a *b)
{
	c = a * b;
	return c;
}
void main()
{
	int a, b;
	
	printf("écrivez une opération à deux nombres: \n");
	printf("saisir le premier nombre : ");
	scanf("%d", &a);
	printf("saisir le deuxième nombre : ");
	scanf("%d", &b);
	printf("saisir le type d'opération +, -, *, / : ");
	scanf("%s", &c);
}
switch (op)
{
case 1:
	r = a + b;
	printf("%d", r);
	break;
case 2:
	r = a * b;
	printf("%d", r);
	break;
case 3:
	r = a / b;
	printf("%d", r);
	break;
case 4:
	r = a - b;
	printf("%d", r);
	break;
default:
	printf("L'operation n'est pas valide");
	break;
}
return 0;

}

