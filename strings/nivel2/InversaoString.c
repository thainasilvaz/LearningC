#include <stdio.h>
#include <string.h>

int main(){

    char palavra[100];
    char invertida[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho_palavra = strlen(palavra);

    int j = 0;
    for(int i = tamanho_palavra - 1 ; palavra[i] >= 0; i--){

        invertida[j] = palavra[i];
        j++;
        
    }

    invertida[j] = '\0';

    printf("Palavra invertida: %s.", invertida);

    return 0;
}