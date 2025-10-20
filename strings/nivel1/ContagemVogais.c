#include <stdio.h>
#include <ctype.h>

int main(){

    char palavra[100];
    int contagem_vogais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for(int i = 0; palavra[i] != '\0'; i++){
        palavra[i] = tolower(palavra[i]);
    }

    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == 'a'){
            contagem_vogais++;
        }
        else if(palavra[i] == 'e'){
            contagem_vogais++;
        }
        else if(palavra[i] == 'i'){
            contagem_vogais++;
        }
        else if(palavra[i] == 'o'){
            contagem_vogais++;
        }
        else if(palavra[i] == 'u'){
            contagem_vogais++;
        }
        else{

        }
    }

    printf("A palavra possui %d vogais.", contagem_vogais);

    return 0;
}