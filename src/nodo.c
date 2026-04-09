#include "nodo.h"

Nodo *nodo_crear(void *info, size_t size);
{
    Nodo *nuevo=(Nodo *)malloc(sizeof(Nodo));
    nuevo->info=malloc(size);
    memcpy(nuevo->info, info, size);
    nuevo->sig=nuevo->ant=NULL;

    return nuevo;
}
void nodo_eliminar(Nodo *nodo);
{
    if(!n->sig && !n->ant){
        free(n->info);
        free(n);
    }

    else{
    printf("El nodo no se puede liberar \n")
    }
}
bool nodo_actualizar(Nodo *nodo, void *info, size_t size);
{
    nodo->info realloc(nodo->info, size);
    if(!nodo->info) return false;
    memcpy(nodo->info, info, size);
}