#include <stdlib.h>
#include <string.h>
#include <pthread.h>

/* pointer to the next list node */
struct linkedlist_node_t {
	int num;
	int prim; //se for primo vai para 1 
	struct linkedlist_node_t *next;              
};

/*typedef int inteiro;

inteiro a;

lista *z;
typedef lista* Lista        ;
Lista z

no x;
struct linkedlist_node_t x;
*/

/* Linked list descriptor (there is only one by list)*/
typedef struct linkedlist_t{
	struct linkedlist_node_t *inicio; /* Pointer to the first node. */
	struct linkedlist_node_t *fim; /* Pointer to the last node. */
	unsigned int tam; /* (=15 ?) Number of nodes in the list */
	unsigned int data_sz; /*  = sizeof(int); /*? Data size to be allocated in each node */
	/* Place your sincronization primitives here */
}descritor;


/* Implement each one of this funcionalities */
descritor *linkedlist_create(unsigned int sz, unsigned int max_lengh);
void linkedlist_insert_tail(struct descritor *l, void *e);
void linkedlist_insert_head(struct descritor *l, void *e);
void linkedlist_remove_tail(struct linkedlist_t *l, void *e);
void linkedlist_remove_head(struct linkedlist_t *l, void *e);
int linkedlist_size(struct linkedlist_t *l);
void linkedlist_destroy(struct linkedlist_t **l);
