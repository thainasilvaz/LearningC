#include <stdio.h>
#include <ctype.h>

int main(){

    char palavra[100];
    char nova_palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for(int i = 0; palavra[i] != '\0'; i++){
        palavra[i] = tolower(palavra[i]);
    }

    int j = 0;
    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u'){
            nova_palavra[j] = palavra[i];
            j++;
        }
    }

    nova_palavra[j] = '\0';

    printf("\nPalavra sem vogais: %s", nova_palavra);

    return 0;
}