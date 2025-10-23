typedef struct {
    int *elementos; //ponteiro para vetor de inteiros
    int tamanho; //numero de elementos da lista
} Lista;

void criar_lista(Lista *lista);
void inserir_final(Lista *lista, int valor);
void imprimir_lista(Lista *lista);
void buscar_elemento(Lista *lista, int elemento);
void remover_elemento(Lista *lista, int elemento);
void destruir_lista(Lista *lista);