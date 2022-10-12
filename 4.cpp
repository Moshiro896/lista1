#include <stdio.h>

int main()
{
	float a, b, c, d;
	
	printf("informe o primeiro valor: ");
	scanf("%f", &a);
	printf("informe o segundo valor: ");
	scanf("%f", &b);
	printf("informe o terceiro valor: ");
	scanf("%f", &c);
	printf("informe o quarto valor: ");
	scanf("%f", &d);
	
	printf("O produto entre os números %f, %f, %f e %f foi: %f", a, b, c, d, a * b * c * d);
	
	return 0;
}