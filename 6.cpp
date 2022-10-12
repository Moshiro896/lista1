#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("informe o primeiro valor: ");
	scanf("%d", &a);
	printf("informe o segundo valor: ");
	scanf("%d", &b);
	
	printf("a soma e: %d \n", a + b);
	
	printf("informe mais um valor: ");
	scanf("%d", &c);
	
	printf("a resultado final e: %d \n", a + b - c);
	
	return 0;
}