//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include "funcoes.h"

//Definições ASCI
#define RESET    "\033[0m"
#define VERMELHO "\033[1;31m"

//Estruturas
struct cadastro{
	char nome[20],user[20],senha[20],endereco[100],email[100];
	int ano_nascimento;
};
struct login{
	char user[20],senha[20];
};

//Escopo do código
int main() {
	setlocale(LC_ALL, "");
	
	//Variáveis globais
	char user_ativo[20];
	
	system("color 0C");
	printf("\n");
	printf("\t                                                            ###\n");
	printf("\t                                                          *#####\n");
	printf("\t                                                           #####\n");
	printf("\t                                                    ##################\n");
	printf("\t                                                 #######################*\n");
	printf("\t                                               #######################*###*\n");
	printf("\t                                             ###########################*####\n");
	printf("\t                                            #############################* ####\n");
	printf("\t                                          ################################# ####\n");
	printf("\t                                          ################################## ####\n");
	printf("\t                                         ###################################  ###\n");
	printf("\t                                        ##################################### ####\n");
	printf("\t                                        *########################################*\n");
	printf("\t                                        #*****************************####********#\n");
    printf("\t   *#******#  ***#***#**  ***   *********      ##*##          #****      ******#\n");
    printf("\t  ########## ########### ##### ########### *##########     ##########   ##########*\n");
    printf("\t  #########  *###*####*  ####  #########* *##### ######  *##### ######  ####**######\n");
    printf("\t #####       ####        ####  ####      *####     #### *####     ##### ####    *####\n");
    printf("\t #########* *########*  #####  ########* ####      #### ####      ####*####*    *####\n");
    printf("\t #########  ##########  ####  *##############      #### ####      #### ####     *###\n");
    printf("\t#####       ####        ####  ####      #####     ##### ####     ##### ####    #####\n");
    printf("\t####*      ########### *###* *####       ######*######  #####*#######  #####*######\n");
    printf("\t###*       ########### ####* #####        ##########     ##########   *##########\n");
    printf("\t ###        #########   ###   ###           #####          ##*##       ######\n");
    printf("\t                                                    *******                   ***\n");
    printf("\t     ***                                         *********                   ****\n");
    printf("\t      ***                                   ***********   **                ****\n");
    printf("\t       ****                               ********   *******              *****\n");
    printf("\t         ****                            *****************               ****\n");
    printf("\t          ******                        **************   *****         *****\n");
    printf("\t            *******                   *************   *******        ******\n");
    printf("\t              *********           ************************         ******\n");
	printf("\t                 **************************************         *******\n"); 
	printf("\t                      ***************      ********         *********\n");
	printf("\t                                                        **********\n");
	printf("\t                              *****+             **************\n");
	printf("\t                                 **************************\n");   
	printf("\t                                      ***************\n");
    sleep(4);
    system("cls");
    system("color 0F");
    
	do{
		//Menu Principal
		
		//Variáveis locais
		int opcao;
		struct cadastro pessoa1;
		struct login pessoa2;
		
		printf(VERMELHO"\n\tBem Vindo!\n"RESET);
		printf(VERMELHO" 1- "RESET);printf("Cadastrar\n");
		printf(VERMELHO" 2- "RESET);printf("Login\n");
		printf(VERMELHO" 3- "RESET);printf("Sair\n"); 
		printf(VERMELHO" Opção: "RESET);
		scanf("%d",&opcao);
		system("cls");
		
		if(opcao == 1){
			printf(VERMELHO"\n\tCadastro\n"RESET);
			Cadastro(&pessoa1); 
			sleep(2);
			system("cls");
		} 
		else if(opcao == 2){
			printf(VERMELHO"\n\tLogin\n"RESET);
			Login(&pessoa2);
			strcpy(user_ativo, pessoa2.user);
			sleep(2);
			system("cls");
			
			//Menu Secundário
			while(true){
				//Variáveis locais
				int opcao;
				printf(VERMELHO"\nUsuario Logado: %s\n"RESET,user_ativo);
				printf(VERMELHO"O que desejas fazer?\n1- Buscar por Alimentos\n2- Fazer Pedidos\n3- Pedidos Realizados\n4- Sair da Conta\nOpção: ");
				scanf("%d", &opcao);
				if(opcao == 1){
					printf("teste");
				}else if(opcao == 2){
					printf("teste");
				}else if(opcao == 3){
					printf("teste");
				}else{
					break;
				}
			}
			sleep(2);
			system("cls");
		} else
			break;
	}while(true);
	
	system("cls");
	system("pause");
	return 0;
}
