//Estruturas
struct cadastro{
	char nome[20],user[20],senha[20],endereco[100],email[100];
	int ano_nascimento;
};
struct login{
	char user[20],senha[20];
};

//Assinaturas das funções
void  Cadastro(struct cadastro *pessoa1);
void Login(struct login *pessoa2);
