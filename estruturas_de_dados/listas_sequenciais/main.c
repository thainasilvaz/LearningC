#include <stdio.h>
#include "lista_sequencial.c"

int main(){

    Lista minhaLista; //criando a variável minhaLista do tipo Lista

    criar_lista(&minhaLista);
    inserir_final(&minhaLista, 20);
    inserir_final(&minhaLista, 25);
    inserir_final(&minhaLista, 30);
    //imprimir_lista(&minhaLista);
    tamanho_lista(&minhaLista);
    //remover_elemento(&minhaLista, 2);
    //buscar_elemento(&minhaLista, 70);
    insere_meio(&minhaLista, 100, 1);
    imprimir_lista(&minhaLista);
    destroi_lista(&minhaLista);

    return 0;

}