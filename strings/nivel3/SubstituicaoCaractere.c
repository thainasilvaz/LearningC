#include <stdio.h>

int main(){

    char palavra[100];
    char letra_substituir;
    char letra_substituida;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite uma letra da palavra para ser substituida: ");
    scanf(" %c", &letra_substituida);  //o espaço antes do %c faz o scanf ignorar qualquer espaço em branco ou \n que esteja sobrando no buffer do teclado

    printf("\nDigite a letra que substituira a letra anterior: ");
    scanf(" %c", &letra_substituir);

    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == letra_substituida){
            palavra[i] = letra_substituir;
        }
    }

    printf("\nA nova palavra eh %s.", palavra);

    return 0;
}