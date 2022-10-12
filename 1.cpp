#include <stdio.h>

int main()
{
	float a, b, c;
	
	printf("informe o primeiro valor: ");
	scanf("%f", &a);
	printf("informe o segundo valor: ");
	scanf("%f", &b);
	printf("informe o terceiro valor: ");
	scanf("%f", &c);
	
	printf("O valor calculado da media entre os números %f, %f e %f foi: %f", a, b, c, (a + b + c) / 3);
	
	return 0;
}