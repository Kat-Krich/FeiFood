#include <stdio.h>
int main(){
	float a;
	float b;
	float c;
	float d;
	float e;

	printf("Digite o primeiro numero: ");
	scanf("%f",&a);
	printf("\nDigite o segundo numero: ");
	scanf("%f",&b);
	printf("\nDigite o terceiro numero: ");
	scanf("%f",&c);
	printf("\nDigite o quarto numero: ");
	scanf("%f",&d);
	printf("\nDigite o quinto numero: ");
	scanf("%f",&e);

	float soma = a+b+c+d+e;

	printf("Resultado: %f\n", soma);

	system("pause");
	return 0;
}
