/*
* informações essenciais do trabalho do instagram-->
*
* Deve ser entregue até o dia 11 de novembro no classroom
* a apresentação vai ser de forma individual e o trabalho deve ser feito com os 3 integrantes, sera feito um sorteio
* a data e horario da apresentacao do trabalho vai ser sortiada pelo professor, podendo horario esse ser em horario de aula de outro professor
*
* o trabalho precisa obrigatoriamente utilizar um trecho de codigo e uma certa ferramenta fornecida pelo professor
*
* Planejamento do trabalho do instagram -->
*
*Em sua composição tera 4 funcionalidades basicas e modulos para seu sistema
*
* -->PERFIL
* -->POSTAGENS                          esta diretamente relacionado com os comentarios e as curtidas
* -->COMENTARIOS
* -->CURTIDAS
*
*/

/*trabalho de IP
COLTEGRAM
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TAM_MAX_ID (30 + 1)
#define TAM_MAX_NOME (60 + 1)
#define TAM_EMAIL (40 + 1)// precisa tem @ seguido de um dominio
#define TAM_MAX_SENHA (50 + 1)
#define TAM_MAX_COMENTARIO (70 + 1)
#define TAM_DESCRICA0 (60 + 1)
#define TAM_ESCOLHA (50 + 1)


#define SUCESSO 0

//vou colocar dentro de alguma funçao, mais por enquanto fica aqui

void util_removeQuebraLinhaFinal(char nome[]) {

	if (nome[strlen(nome) - 1] == '\n') {

		nome[strlen(nome) - 1] = '\0';
	}
}
/*
struct curtida_p {

	bool curtida;

};

typedef struct curtida_p curtida;

struct comentario_p {

	char comenta[TAM_MAX_COMENTARIO];

};

typedef struct comentario_p comentario;

struct postagem_p {

	int id;
	//imagem em ascii
	char descricao[TAM_DESCRICA0];
	comentario * comentarios;
	curtida* curtidas;

};

typedef struct postagem_p postagem;

*/
struct perfil_p {

	char id[TAM_MAX_ID];
	char nome[TAM_MAX_NOME];
	char email[TAM_EMAIL];
	char senha[TAM_MAX_SENHA];
	//postagem * postagens;

};

typedef struct perfil_p perfil;


//criar uma função que apartir do momento que vc cadastra algum perfil ou entre em algum tenha a opcao de sair

void cadastrar_perfil(perfil* perfil_cadastro) {

	printf("Digite um ID, para seu perfil(como um nickname)");
	fgets();





}

void entrar_perfil() {

	//digite o ID para saber qual perfil que vai entrar


}

//deixar diversos comentarios explicando cada função e o funcionamento do codigo ao longo dele

void menu_inicial(bool existe) {

	char Buffer_Escolha[TAM_ESCOLHA];
	char* escolha;

	printf("Escreva o que deseja fazer:\n--> Cadastrar\n--> Entrar\n \n-->Fechar programa");
	fgets(Buffer_Escolha, TAM_ESCOLHA, stdin);

	escolha = (char*)malloc((strlen(Buffer_Escolha) + 1) * sizeof(char));

	if (strcmp(escolha, "Cadastrar") == 0) {

		existe = true;

		cadastrar_perfil();

	}
	else if (strcmp(escolha, "Entrar") == 0) {

		if (existe == false) {

			printf("Nao eh possivel entrar em perfil ja que ainda nao exite nenhum\n");

		}
		else if {

			entrar_perfil();

		}
		else {

			printf("Opção inválida.\n");

		}


	}

	//void voltar_menu() {}


	int main(int argc, char** argv) {

		bool existe_perfil_cadastrado = false;


		menu_inicial(existe_perfil_cadastrado);


		return SUCESSO;
	}
