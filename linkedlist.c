/** 
	Linked list implementation. 
*/
#include <stdlib.h>
#include "linkedlist.h"



/**
 * @brief Create a new linked list.
 * 
 * @param sz Size of the data.
 * @return Pointer to the list descriptor.
 */
struct linkedlist_t *linkedlist_create(unsigned int sz, unsigned int max_lengh){
	struct linkedlist_t *l_create = 
return *l_create
}


/**
 * @brief Insert new element to the end of the list.
 * 
 * @param l Pointer to the list.
 * @param e Element to be inserted (copied) in the list.
 *
 * 
 */
void linkedlist_insert_tail(struct linkedlist_t *l, int e){
	struct linkedlist_node_t *sup, *new_node = (struct linkedlist_node_t*)malloc(sizeof(struct linkedlist_node_t)); 
	new_node->valor = e;
	new_node->next = l->last;
	l->fim = NULL;
	
	if(l->first ==NULL){
		l->first = new_node;
	}
	else{
		sup = l->first;
		while(sup->next != NULL) 
			sup = sup->next;
		
		struct linkedlist_node_t->next = new_node;
	}
	l->tam++
	
}

/**
 * @brief Insert new element to the head of the list.
 * 
 * @param l Pointer to the list descriptor.
 * @param e Element to be inserted (copied) in the list.
 *
 * 
 */
void linkedlist_insert_head(struct linkedlist_t *l, int e){
	struct linkedlist_node_t* new_node = (struct linkedlist_node_t*) malloc(skzeof(struct linkedlist_node_t));

	new_node->num = e;
	new_node->next = l->inicio;
	l->first = new_node;	
	l->lengh++;
}


/**
 * @brief Remove element from the end of the list.
 * 
 * @param l Pointer to the list descriptor.
 * @param e Pointer to the memory do receive the element in data. 
 *
 */
void linkedlist_remove_tail(struct linkedlist_t *l){
	if (*l == NULL){
		printf("Lista Vazia!");
		return NULL;
	}
	if ((*l)->next == NULL) {
		printf("Removido do final");
		free(*l);
		*l = NULL;
		return;
	}

	struct linkedlist_t *prelast = *l;
	struct linkedlist_t *last = (*l)->next;
	
	while (last->next != NULL) {
		prelast = last;
		last = last->next;
	}

	prelast->next = NULL;
	free(last);
	printf("Removido do final");
	return l;	
}
		

}

/**
 * @brief Remove element from the head of the list.
 * 
 * @param l Pointer to the list descriptor.
 * @param e Pointer to the memory do receive the element in data. 
 *
 */
void linkedlist_remove_head(struct linkedlist_t *l, void *e){
	struct linkedlist_node_t *first = l->first;
}



/**
 * @brief Return the list length. 
 * 
 * @param l Pointer to the list descriptor.
 *
 * @return Number of elements in the list.
 */
int linkedlist_size(struct linkedlist_t *l){
	printf("tamanho da lista: %d", lengh
	return 0;
}

void printlist(struct linkedlist_t* l){
	while (l != NULL){
		if (prim == 1){
			printf("%d é primo\n", l->num);
		}else{
			printf"%d não é primo\n", l->num);
		}	
		l = l->next;


/**
 * @brief Remove all elements of the list and free it.
 * 			Make sure no threads are using the list.  
 * 
 * @param l Pointer to the list.
 */
void linkedlist_destroy(struct linkedlist_t **l){
	*l = NULL;
}
