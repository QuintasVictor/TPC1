#include <stdio.h>
#include "linkedlist.h"

/* Problema a ser resolvido: descobrir se um número é primo
	como vai ser: 
	Gerador randomico de números - implementa na lista
	threads separadas para analisar números diferentes da lista
		Thread_1 analisa primeiro item da lista, thread_2 analisa o segundo, thread_x deleta o primeiro item da lista, caso ele não seja primo, se for primo, tenta eliminar o proximo número

Achar uma maneira de coletar 10 números primos
lista de 10 itens - coloca números aleatórios em todos eles e as threasd de análise começam a analisar se eles são primos.
	A thread x _ativada somente depois que o número análisada, exclui o item caso ele não seja primo e o mantém caso este seja.
Ao fim, deve-se ter uma lista com 10 números primos


*/
 

typedef struct{
	no *inicio;
	int tam;
}Lista;

int main(){
	descritor l;
	int opcao, *valor;

	l.inicio = NULL;
	l.tam = 0;

	do {
		printf("1 - inserir inicio\n2 - inserir fim\n3 - imprimir\n5 - Sair\n");
		scanf("%d", &opcao);
		switch(opcao) {
		case 1:
			printf("Digite um valor a ser inserido no inicio da lista: ");
				scanf("%d", &valor);
				linkedlist_insert_head(*l, valor);
				break;
		case 2:
			printf("Digite um valor a ser inserido no fim da lista: "); 
				scanf("%d", &valor);
				linkedlist_insert_tail(*l, valor);
				break;		 
		case 3:
			imprimir(&l);
			break;
		case 5: 
			printf("Finalizando...");
			break;
		default:
			printf("Opcao Invalida!!!\n");
		} 
	}while (opcao != 5);
 
	
	


	return 0;


}
