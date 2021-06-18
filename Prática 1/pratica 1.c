/*Estrututura de dados
Pratica 1*/

#include <stdlib.h>
#include <stdio.h>

struct jogador{
	int id;
	char nome, apelido;
	int ngolos;
	bool activo;
	int datainicio;
	int datafim;
};

struct equipa{
	int id;
	char nome;
};

const MAX =5;
int main()
{
	printf("Ola mundo");
	void terceiroComMaisGolos(Jogador);
	void inserirDados(Jogador);
	void mostrar(Jogador);
	
	return 0;
}

//Listar jogadores
void mostrar(Jogador jog[]){
	int i=0;
	for(i=0; i < MAX; i++){
		printf("Id: %i \n",jog[i].id);
		printf("Nome: %s \n",jog[i].nome);	
		printf("Apelido: %s \n",jog[i].apelido);	
		printf("\n");
	}
}



// Eliminar o terceiro jogador com mais golos
void terceiroComMaisGolos(Jogador jog[]){
	int i = 0, j = 0;
	Jogador aux; 
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			if(jog[i].ngolos < jog[j].ngolos){
				jog[i] = jog[j];
				aux = jog[i];
				jog[j] = aux;
			}
		}
	}
	
	return jog[2];
}

//Cadastrar ou registar jogador

void inserirDados(Jogador jog[]){
	int i = 0;
	for(i = 0; i < MAX; i++){
		printf("Digite id do Jogador: ");
		scanf("%i",&jog[i].id);
		
		printf("Digite o nome do Jogador: ");
		scanf("%c",&jog[i].nome);
		
		printf("Digite o Apelido do Jogador: ");
		scanf("%c",&jog[i].apelido);
		
		printf("Digite o numero de golos do jogador: ");
		scanf("%i",&jog[i].ngolos);
		
		printf("Digite data de inicio: ");
		scanf("%i",&jog[i].datainicio);	
		
		printf("Digite data de fim: ");
		scanf("%i",&jog[i].datafim);	
						
		printf("\n");
	}
}
