#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include "funcoes.h"

int main() {
	setlocale(LC_ALL, "");
	printf("Teste");
	do{
		int op_menuinicial;
		printf("\tFeiFood\n1- Cadastrar\n2- Login\n3- Sair\nOpção: ");
		scanf("%d",&op_menuinicial);
		if(op_menuinicial == 1){
			system("cls");
			int  nome, user,senha;
			printf("\tCadastro\n");
			//cadastro(user, senha, nome);
			user = cadastro(nome,user,senha); 
			sleep(2);
			
			system("cls");
		} else if(op_menuinicial == 2){
			system("cls");
			
			printf("\tLogin\n");
			sleep(2);
			
			system("cls");
		} else
			break;
	}while(true);
	
	system("cls");
	system("pause");
	return 0;
}
