//calculadora.c
#include "calculadora.h"

float somar(float a, float b){
	return a+b;
}

float subtrair(float a, float b){
	return a-b;
}

float multiplicar(float a, float b){
	return a*b;
}

float dividir(float a, float b){
	return a/b;
}

int eh_divisao_valida(float divisor){
	if(divisor == 0.0){
		return 0;
	}else{
		return divisor;
	}
}
