bool lista_es_vacia(DLista *l);

bool lista_insertar_vacia(DLista *l, void *info, size_t size)
{
    if(l=NULL)return false;
    Nodo *n=nodo_crear (info, size);
    l->head=l->tail=p;
    return true;
}
    

bool lista_insertar_inicio(DLista *l, void *info, size_t size)
{

}
bool lista_insertar_fin(DLista *l, void *info, size_t size);
bool lista_insertar_x_pos(DLista *l, int pos, void *info, size_t size);
#endif