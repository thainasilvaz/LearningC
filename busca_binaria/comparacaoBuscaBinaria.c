#include <stdio.h>

int BuscaBinariaIterativa(int vetor[], int tamanho, int elemento){

    int inicio = 0; //o primeiro elemento sempre está na posição 0
    int fim = tamanho - 1; //útimo índice do vetor

    while (inicio <= fim) { //enquanto ainda houver intervalo para buscar
        int meio = (inicio + fim) / 2; //índice do elemento do meio

        if (vetor[meio] == elemento) {
            return meio; // elemento encontrado no meio do vetor
        } 
        else if (vetor[meio] < elemento) {
            inicio = meio + 1; // buscando na metade direita
        } 
        else {
            fim = meio - 1; // busca na metade esquerda
        }
    }

    return -1; // não encontrado

}


/*
int BuscaBinariaRecursiva(int vetor[], int inicio, int fim, int elemento){

    if (inicio > fim)
        return -1; // elemento não encontrado

    int meio = (inicio + fim) / 2;

    if (vetor[meio] == elemento)
        return meio;
    else if (vetor[meio] < elemento)
        return buscaBinariaRecursiva(vetor, meio + 1, fim, elemento);
    else
        return buscaBinariaRecursiva(vetor, inicio, meio - 1, elemento);

}

*/



int main(){

    int numeros[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); // sizeof(numeros) -> retorna o tamanho total em bytes ocupado pelo vetor inteiro. sizeof(numeros[0]) -> retorna o tamanho em bytes de um elemento
    //a variavel tamanho recebe a quantidade de elementos do vetor -> mesmo adicionando ou removendo elementos, o tamanho vai ser calculado automaticamente

    int alvo = 23;

    int resultado = BuscaBinariaIterativa(numeros, tamanho, alvo); //encontra a posição de um determinado elemento dentro do vetor
    //int resultado = buscaBinariaRecursiva(numeros, tamanho, alvo);

    if (resultado != -1)
        printf("Elemento encontrado no indice %d.\n", resultado);
    else
        printf("Elemento nao encontrado.\n");


   

    return 0;

}