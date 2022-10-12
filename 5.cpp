#include <stdio.h>

int main()
{
	int a, b;
	
	printf("informe o primeiro valor: ");
	scanf("%d", &a);
	printf("informe o segundo valor: ");
	scanf("%d", &b);
	
	printf("quociente: %d \n", a / b);
	printf("resto: %d", a % b);
	
	return 0;
}