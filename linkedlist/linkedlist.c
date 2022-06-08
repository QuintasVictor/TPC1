/** 
	Linked list implementation. 
*/
#include <stdlib.h>
#include <stdlib.h> //biblioteca para o uso de rand
#include "linkedlist.h"



/**
 * @brief Create a new linked list.
 * 
 * @param sz Size of the data.
 * @return Pointer to the list descriptor.
 */
//descritor *linkedlist_create(unsigned int sz, unsigned int max_lengh){

struct linkedlist_node_t *linked_create(unsigned int sz, unsigned int max_lengh){ //como que eu faco isso ? ta dando erro
	struct linkedlist_node_t *newnode = malloc(sizeof(struct linkedlist_node_ts;
	newnode = calloc(1, sizeof(struct linkedlist_t));
	return newnode;
}
	
	

	/* Alocar o nodo descritor retornando um ponteiro para ele. Entradas:
	data_size: quantidade de bytes do campo data dos nodos.
	length: quantidade máxima de nodos suportados pela lista.
	Retorno: Ponteiro para o descritor recém alocado.
*/
//}


/**
 * @brief Insert new element to the end of the list.
 * 
 * @param l Pointer to the list.
 * @param e Element to be inserted (copied) in the list.
 *
 * 
 */

void linkedlist_insert_tail(descritor *l, void *e){
	/* Insere um item no fim da lista. Deve bloquear a thread chamadora caso a lista contenha
	length elementos alocados. Entradas:
	l: Descritor da lista (retornado por linkedlist_create()).
	e: ponteiro para o dado a ser alocado na lista. O dado deve ser copiado para o campo data
	do nodo. A quantidade a ser copiada é definida por data_size.
	*/
	no *sup, *novo = (no*)malloc(sizeof(no);
	novo->valor = e;
	novo->next = l->fim;
	l->fim = NULL;
	
	if(l->inicio ==NULL){
		l->inicio = novo;
	}
	else{
		sup = l->inicio;
		while(sup->next != NULL) 
			sup = sup->next;
		
		no->proximo = novo;
	}
	l->tam++
}

/**
 * @brief Insert new element to the head of the list.

 * @param l Pointer to the list descriptor.
 * @param e Element to be inserted (copied) in the list.
**/ 
void linkedlist_insert_head(struct linkedlist_t *l, void *e){
	no *novo = (no*)malloc(sizeof(no);
	novo->valor = e;
	novo->next = l->inicio;
	l->inicio = novo;
	l->tam++;
}


/**
 * @brief Remove element from the end of the list.
 * 
 * @param l Pointer to the list descriptor.
 * @param e Pointer to the memory do receive the element in data. 
 *
 */
void linkedlist_remove_tail(struct linkedlist_t *l, void *e){
	/*Mesmo comportamento de linkedlist_remove_head(), contudo, removendo do final da
	lista.
	*/	
}

/**
 * @brief Remove element from the head of the list.
 * 
 * @param l Pointer to the list descriptor.
 * @param e Pointer to the memory do receive the element in data. 
 *
 */
 
void linkedlist_remove_head(struct linkedlist_t *l, void *e){
	/* Remove o elemento do início da lista. Deve bloquear a thread chamadora caso não exista
	mais elementos na lista.
	l: Descritor da lista (retornado por linkedlist_create()).
	e: ponteiro para área que memória que irá receber o conteúdo do nodo. A rotina deve
	copiar os dados do nodo para a área apontada e desalocar o nodo, mantendo a
	consistência da lista. A quantidade a ser copiada é definida por data_size.
	*/
}



/**
 * @brief Return the list length. 
 * 
 * @param l Pointer to the list descriptor.
 *
 * @return Number of elements in the list.
 */
int linkedlist_size(struct linkedlist_t *l){
	printf("
	// Retorna a quantidade de elementos da lista. Entrada:
	// l: Descritor da lista (retornado por linkedlist_create())		
	return 0;
}


/**
 * @brief Remove all elements of the list and free it.
 * 			Make sure no threads are using the list.  
 * 
 * @param l Pointer to the list.
 */
void linkedlist_destroy(struct linkedlist_t **l){
	/* Desaloca completamente a lista, inclusive o nodo descritor. Nenhuma thread pode estar
	utilizando a lista quando esta função é chamada
	*/
	*l = NULL;
}




