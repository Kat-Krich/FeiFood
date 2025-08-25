#include <stdio.h>

int soma_int(int a,int b){
	int soma = a+b;
	return soma;
}

float soma_float(float a, float b){
	float soma = a+b;
	return soma;
}

int main(){
	int soma1 = soma_int(5,8);
	float soma2 = soma_float(3.5,4.6);
	
	printf("Soma int = %d\n",soma1);
	printf("Soma float = %f\n", soma2);
	
	system('pause');
	return 0;
	
}
