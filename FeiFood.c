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
#define AMARELO "\x1b[1;33m"
#define VERDE "\x1b[1;32m"

//Escopo do código
int main() {
	setlocale(LC_ALL, "");
	
	//Variáveis globais
	char user_ativo[20];
	
	system("color 0C");
	printf("\n");
	printf("\t\t                                                            ###\n");
	printf("\t\t                                                          *#####\n");
	printf("\t\t                                                           #####\n");
	printf("\t\t                                                    ##################\n");
	printf("\t\t                                                 #######################*\n");
	printf("\t\t                                               #######################*###*\n");
	printf("\t\t                                             ###########################*####\n");
	printf("\t\t                                            #############################* ####\n");
	printf("\t\t                                          ################################# ####\n");
	printf("\t\t                                          ################################## ####\n");
	printf("\t\t                                         ###################################  ###\n");
	printf("\t\t                                        ##################################### ####\n");
	printf("\t\t                                        *########################################*\n");
	printf("\t\t                                        #*****************************####********#\n");
    printf("\t\t   *#******#  ***#***#**  ***   *********      ##*##          #****      ******#\n");
    printf("\t\t  ########## ########### ##### ########### *##########     ##########   ##########*\n");
    printf("\t\t  #########  *###*####*  ####  #########* *##### ######  *##### ######  ####**######\n");
    printf("\t\t #####       ####        ####  ####      *####     #### *####     ##### ####    *####\n");
    printf("\t\t #########* *########*  #####  ########* ####      #### ####      ####*####*    *####\n");
    printf("\t\t #########  ##########  ####  *##############      #### ####      #### ####     *###\n");
    printf("\t\t#####       ####        ####  ####      #####     ##### ####     ##### ####    #####\n");
    printf("\t\t####*      ########### *###* *####       ######*######  #####*#######  #####*######\n");
    printf("\t\t###*       ########### ####* #####        ##########     ##########   *##########\n");
    printf("\t\t ###        #########   ###   ###           #####          ##*##       ######\n");
    printf("\t\t                                                    *******                   ***\n");
    printf("\t\t     ***                                         *********                   ****\n");
    printf("\t\t      ***                                   ***********   **                ****\n");
    printf("\t\t       ****                               ********   *******              *****\n");
    printf("\t\t         ****                            *****************               ****\n");
    printf("\t\t          ******                        **************   *****         *****\n");
    printf("\t\t            *******                   *************   *******        ******\n");
    printf("\t\t              *********           ************************         ******\n");
	printf("\t\t                 **************************************         *******\n"); 
	printf("\t\t                      ***************      ********         *********\n");
	printf("\t\t                                                        **********\n");
	printf("\t\t                              *****+             **************\n");
	printf("\t\t                                 **************************\n");   
	printf("\t\t                                      ***************\n");
    sleep(5);
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
			//Menu Secundário
			if(Login(&pessoa2) == 0){
				strcpy(user_ativo, pessoa2.user);
				struct alimento comida;
    			sleep(2);
    			system("cls");
				while(true){
					int opcao1;
					printf(VERMELHO"\n Usuario Logado: "RESET);printf("%s",user_ativo);
					printf(VERMELHO"\n O que desejas fazer?\n");
					printf(" 1- "RESET);printf("Buscar por Alimentos\n");
					printf(VERMELHO" 2- "RESET);printf("Fazer Pedidos\n");
					printf(VERMELHO" 3- "RESET);printf("Pedidos Realizados\n");
					printf(VERMELHO" 4- "RESET);printf("Sair da Conta\n");
					printf(VERMELHO" Opção: "RESET);
					scanf("%d", &opcao1);
					
					if(opcao1 == 1){
						sleep(2);
    					system("cls");
						printf(VERMELHO"\n Qual restaurante tu desejas?\n 1- "RESET"McDonald's\n"VERMELHO" 2- "RESET"Subway\n"VERMELHO" 3- "RESET"Burger King\n"VERMELHO" 4- "RESET"Taco Bell\n"VERMELHO" 5- "RESET"Chine in Box\n"VERMELHO" 6- "RESET"Sukiya\n");
						printf(VERMELHO" Opção: "RESET);
						int opcao2;
						scanf("%d",&opcao2);
						switch(opcao2){
							case 1:
								Buscar(&comida,opcao2,user_ativo);
								break;
						}
					}else if(opcao1 == 2){
						printf("teste");
					}else if(opcao1 == 3){
						printf("teste");
					}else{
						break;
					}	
					
				}
				sleep(2);
				system("cls");
			}
			sleep(2);
			system("cls");	
		}else
			break;
	}while(true);
	
	system("cls");
	system("pause");
	return 0;
}
