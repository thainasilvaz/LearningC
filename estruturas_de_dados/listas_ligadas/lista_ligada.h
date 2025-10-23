//definição do nó
typedef struct No{ //No é o nome interno da struct e ListaLigada é o apelido
    int valor; //valor do nó
    struct No* proximo; //ponteiro para outro struct No (o próximo nó)
} ListaLigada;

ListaLigada* inserirFinal(ListaLigada *first_no, int novo_valor); //retorna um ponteiro para o início da lista
void imprimirLista(ListaLigada  *lista);
void destruirLista(ListaLigada *lista);
//inserirInicio
//inserirMeio
//removerElemento
//buscarElemento
