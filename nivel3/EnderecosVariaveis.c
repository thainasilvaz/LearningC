#include <stdio.h>

int main(){

    int x = 10;
    int * pointer = &x;

    printf("o valor da variavel x eh %d\n", x);
    printf("o endereco da variavel x eh: %p\n", &x); //o modificador %p em C é um especificador de formato usado na função printf() para imprimir um endereço de memória (ponteiro) de forma legível
    printf("O valor armazenado no ponteiro eh %p\n", pointer);
    printf("O valor apontado pelo ponteiro eh %d\n", *pointer);

    /*
    x -> armazena o valor 10
    &x -> retorna o endereço de memória de x
    pointer -> armazena o endereço de x
    *pointer -> acessa o valor armazenado no endereço apontado (ou seja, o conteúdo de x)
    */

    //obs: acessar o endereço de x usando só &x nos dá apenas o endereço de x, mas não o armazena em lugar nenhum -> por isso usa-se ponteiros, para acessar e modificar o valor original de x indiretamente.
}