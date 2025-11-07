#include "funcoes.h"
#include <string.h>

//Definições ASCI
#define RESET    "\033[0m"
#define VERMELHO "\033[1;31m"

int i;

void Cadastro(struct cadastro *pessoa1){
	char nome[150];
	printf(VERMELHO" Nome: "RESET);
	getchar();
	fgets(nome,150,stdin);
	int len = strlen(nome);
	for (i = 0; i < len; ++i) {
    	if (nome[i] == '\n') {
        	nome[i] = '\0';          
    	}
	}
	strcpy(pessoa1->nome, nome);
	
	char email[100];
	printf(VERMELHO" Email: "RESET);
	fgets(email,100,stdin);
	len = strlen(email);
	for (i = 0; i < len; ++i) {
    	if (email[i] == '\n') {
        	email[i] = '\0';          
    	}
	}
	strcpy(pessoa1->email, email);
	
	printf(VERMELHO" Ano de Nascimento: "RESET);	
	scanf("%d %d %d", &pessoa1->ano_nascimento[0],&pessoa1->ano_nascimento[1],&pessoa1->ano_nascimento[2]);
	getchar();	
	
	char user[20];
	printf(VERMELHO" User(Até 20 caracteres): "RESET);
	fgets(user,20,stdin);
	len = strlen(user);
	for (i = 0; i < len; ++i) {
    	if (user[i] == '\n') {
        	user[i] = '\0';          
    	}
	}
	FILE *arquivo = fopen("usuarios.txt","r");
	char linha[1000];
	while(fgets(linha,sizeof(linha),arquivo)!= NULL){
		int len = strlen(linha);
		for (i = 0; i < len; ++i) {
    		if (linha[i] == '\n') {
        		linha[i] = '\0';          
    		}
    	}
    	char usuario[20];
    	strcpy(usuario, strtok(linha, ";"));
    	while(strcmp(usuario, user) == 0){
    		printf(VERMELHO"\tEsse usuário já existe.\n");
    		printf(" User(Até 20 caracteres): "RESET);
			fgets(user,20,stdin);
			len = strlen(user);
			for (i = 0; i < len; ++i) {
    			if (user[i] == '\n') {
        			user[i] = '\0';          
    			}
			}
		}
    	strcpy(pessoa1->user, user);
	}	
	fclose(arquivo);
	
	char senha[20];
	printf(VERMELHO" Senha(Até 20 caracteres): "RESET);
	fgets(senha,20,stdin);
	len = strlen(senha);
	for (i = 0; i < len; ++i) {
    	if (senha[i] == '\n') {
        	senha[i] = '\0';          
    	}
	}
	strcpy(pessoa1->senha, senha);
	
	char endereco[100];
	printf(VERMELHO" Endereço Completo: "RESET);
	fgets(endereco,100,stdin);
	len = strlen(endereco);
	for (i = 0; i < len; ++i) {
    	if (endereco[i] == '\n') {
        	endereco[i] = '\0';          
    	}
	}
	strcpy(pessoa1->endereco, endereco);
	
	arquivo = fopen("usuarios.txt","a");
	fprintf(arquivo,"%s;%s;%s;%s;%d/%d/%d;%s;\n",
		pessoa1 -> user,
		pessoa1 -> senha,
		pessoa1 -> nome,
		pessoa1 -> email,
		pessoa1 -> ano_nascimento[0],
		pessoa1 -> ano_nascimento[1],
		pessoa1 -> ano_nascimento[2],
		pessoa1 -> endereco
		);
	fclose(arquivo);
}

int Login(struct login *pessoa2){
	char user[20];
    char usuario[20];
    char password[20];
    getchar();
    printf(VERMELHO" User: "RESET);
    fgets(user,20,stdin);
    int len = strlen(user);
    for (i = 0; i < len; ++i){
        if (user[i] == '\n'){
            user[i] = '\0';
        }
    }
    FILE *arquivo = fopen("usuarios.txt", "r");
    char linha[1000];
    while(fgets(linha, sizeof(linha), arquivo) != NULL){
    	len = strlen(linha);
        for (i = 0; i < len; ++i){
            if (linha[i] == '\n'){
                linha[i] = '\0';
            }
        }
        strcpy(usuario, strtok(linha, ";"));
        strcpy(password, strtok(NULL, ";"));
        if(strcmp(usuario, user) == 0){
        	char senha[20];
            printf(VERMELHO" Senha: "RESET);
            fgets(senha,20,stdin);
            len = strlen(senha);
            for (i = 0; i < len; ++i){
                if (senha[i] == '\n'){
                    senha[i] = '\0';
                }
            }
            if(strcmp(password, senha) == 0){
                strcpy(pessoa2->user, user);
                strcpy(pessoa2->senha, senha);
                fclose(arquivo);
                return 0;
            } else {
                printf(VERMELHO"\tSenha incorreta.\n"RESET);
                fclose(arquivo);
                return 1;
            }
        }
    }
    fclose(arquivo);
    printf(VERMELHO"\tEsse usuário não existe.\n"RESET);
    return 1;
}

void Buscar(struct alimento *comida,int opcao, char user[20]){
	FILE *arquivo = fopen("infocomidas.txt", "r");
    char linha[1000];
    char restauranteEscolhido[20];
    switch(opcao){
        case 1: strcpy(restauranteEscolhido, "McDonalds"); break;
        case 2: strcpy(restauranteEscolhido, "Subway"); break;
        case 3: strcpy(restauranteEscolhido, "Burger King"); break;
        case 4: strcpy(restauranteEscolhido, "Taco Bell"); break;
        case 5: strcpy(restauranteEscolhido, "Chine in Box"); break;
        case 6: strcpy(restauranteEscolhido, "Sukiya"); break;
    }
    printf(VERMELHO"\n Lanches disponíveis em %s:\n\n"RESET, restauranteEscolhido);
    while(fgets(linha, sizeof(linha), arquivo) != NULL){
        int len = strlen(linha);
        for (i = 0; i < len; ++i){
            if (linha[i] == '\n'){
                linha[i] = '\0';
            }
        }
        strcpy(comida->restaurante, strtok(linha, ";"));
        strcpy(comida->nome, strtok(NULL, ";"));
        strcpy(comida->tipo, strtok(NULL, ";"));
        strcpy(comida->descricao, strtok(NULL, ";"));
        comida->preco = atof(strtok(NULL, ";"));
        if(strcmp(comida->restaurante, restauranteEscolhido) == 0){
            printf(" - %s\n", comida->nome);
        }
    }
    char busca[40];
    printf(VERMELHO"\n Qual lanche tu procuras: "RESET);
    getchar();
    fgets(busca, 40, stdin);
    strtok(busca, "\n");
	rewind(arquivo);
	while(fgets(linha, sizeof(linha), arquivo) != NULL){
        int len = strlen(linha);
        for (i = 0; i < len; ++i){
            if (linha[i] == '\n'){
                linha[i] = '\0';
            }
        }
        strcpy(comida->restaurante, strtok(linha, ";"));
        strcpy(comida->nome, strtok(NULL, ";"));
        strcpy(comida->tipo, strtok(NULL, ";"));
        strcpy(comida->descricao, strtok(NULL, ";"));
        comida->preco = atof(strtok(NULL, ";"));
        if(strcmp(comida->nome, busca) == 0){
            printf(VERMELHO"\n %s\n"RESET"Tipo: %s\nDescrição: %s\nPreço: R$ %.2f\n",
                    comida->nome, comida->tipo, comida->descricao, comida->preco);
            break;
        }
    }
    fclose(arquivo);
}
	
