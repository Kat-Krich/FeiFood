#include "funcoes.h"
#include <string.h>

//Definições ASCI
#define RESET    "\033[0m"
#define VERMELHO "\033[1;31m"

void Cadastro(struct cadastro *pessoa1){
	char nome;
	printf(VERMELHO"Nome: "RESET);
	scanf("%s", nome);
	strcpy(pessoa1->nome, nome);
	
	char email[100];
	printf("Email: ");
	scanf("%s", email);
	strcpy(pessoa1->email, email);
	
	printf("Data de Nascimento: ");
	scanf("%d", &pessoa1->ano_nascimento);
	
	char user[20];
	printf("User: ");
	scanf("%s", user);
	strcpy(pessoa1->user, user);
	
	char senha[20];
	printf("Senha: ");
	scanf("%s", senha);
	strcpy(pessoa1->senha, senha);
	
	char endereco[100];
	printf("Endereço Completo: ");
	scanf("%s", endereco);
	strcpy(pessoa1->endereco, endereco);
}

void Login(struct login *pessoa2){
	char user[20];
	printf("User: ");
	scanf("%s", user);
	strcpy(pessoa2->user, user);
	
	char senha[20];
	printf("Senha: ");
	scanf("%s", senha);
	strcpy(pessoa2->senha, senha);
}
