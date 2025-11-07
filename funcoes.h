#include <stdio.h>
FILE *arquivo;
//Estruturas
struct cadastro{
	char nome[150],user[20],senha[20],endereco[100],email[100];
	int ano_nascimento[3];
};
struct login{
	char user[20],senha[20];
};

struct alimento {
	char restaurante[12];
    char nome[40];
    char tipo[15];
    char descricao[200];
    float preco;
};

//Assinaturas das funções
void  Cadastro(struct cadastro *pessoa1);
int Login(struct login *pessoa2);
void Buscar(struct alimento *comida,int opcao, char user[20]);
