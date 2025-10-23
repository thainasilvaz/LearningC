#define MAX 100

typedef struct{
    int elementos[MAX];
    int tamanho;
} Lista;

void criar_lista(Lista *lista);
void imprimir_lista(Lista *lista);
void inserir_elemento(Lista *lista, int elemento);