#include <stdio.h>
#include <string.h> //strlen

int main(){

    char nome[100];

    printf("Digite um nome: ");
    scanf("%s", nome); //a variavel nao precisa do & pois o nome do vetor ja representa o endereço de memoria do seu primeiro elemento -> nome == &nome[0]

    for(int i = 0; i < strlen(nome); i++){
        printf("%c\n", nome[i]);
    }

}