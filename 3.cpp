#include <stdio.h>

int main()
{
	float a, b;
	
	printf("informe o primeiro valor: ");
	scanf("%f", &a);
	printf("informe o segundo valor: ");
	scanf("%f", &b);
	
	printf("O valor calculado da media entre os números %f e %f foi: %f", a, b, (a + b) / 2);
	
	return 0;
}