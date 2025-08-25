#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	int d;
	int e;

	printf("Digite o primeiro numero: ");
	scanf("%d",&a);
	printf("\nDigite o segundo numero: ");
	scanf("%d",&b);
	printf("\nDigite o terceiro numero: ");
	scanf("%d",&c);
	printf("\nDigite o quarto numero: ");
	scanf("%d",&d);
	printf("\nDigite o quinto numero: ");
	scanf("%d",&e);
	
	int soma = a+b+c+d+e;
	
	printf("Resultado: %d\n", soma);

	system("pause");
	return 0;
}
