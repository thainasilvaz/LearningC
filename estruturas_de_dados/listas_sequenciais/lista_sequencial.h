// lista_sequencial.h
#ifndef LISTA_SEQUENCIAL_H //"se não estiver definido ainda... (if not defined)"
#define LISTA_SEQUENCIAL_H //"...defina agora este nome."

#define MAX 100

// estrutura da lista sequencial estática
typedef struct {
    int elementos[MAX]; // vetor de inteiros
    int tamanho;        // quantos elementos estão preenchidos
} Lista;

// Protótipos das funções (declarações)
void criar_lista(Lista *lista);
void inserir_final(Lista *lista, int valor);
void imprimir_lista(Lista *lista);
void tamanho_lista(Lista *lista);
void remover_elemento(Lista *lista, int indice_remover);
void buscar_elemento(Lista *lista, int elemento);
void insere_meio(Lista *lista, int valor, int indice_insercao);
void destroi_lista(Lista *lista);

#endif //"feche a proteção"
