#include <stdio.h>
#include <ctype.h>

int main(){

    char palavra1[100];
    char palavra2[100];
    int iguais = 1;

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra1);

    printf("Digite outra palavra: ");
    scanf("%s", palavra2);

    for(int i = 0; palavra1[i] != '\0'; i++){
        palavra1[i] = tolower(palavra1[i]); 
    }

    for(int i = 0; palavra2[i] != '\0'; i++){
        palavra2[i] = tolower(palavra2[i]); 
    }

    int i = 0;
    while(palavra1[i] != '\0' && palavra2[i] != '\0'){
        if (palavra1[i] != palavra2[i]){
            iguais = 0;
            break;
        }
        i++;
    }

    if(iguais){
        printf("\nPalavras iguais.");
    }else{
        printf("\nPalavras diferentes.");
    }

    return 0;

}