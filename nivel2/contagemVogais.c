#include <stdio.h>
#include <string.h>

int main(){

    char palavra[100];
    int quant_vogais = 0;

    printf("Digite uma palavra e o sistema identificara quantas vogais ela possui: ");
    scanf("%s", palavra);

    for(int i = 0; i < strlen(palavra); i++){
        if (palavra[i] == 'a'){ //em c, aspas duplas sao usadas para strings (sequencias de caracteres), entao para comparar um unico caractere usa-se aspas simples.
            quant_vogais = quant_vogais + 1;
        }
        else if (palavra[i] == 'e'){
            quant_vogais = quant_vogais + 1;
        }
        else if (palavra[i] == 'i'){
            quant_vogais = quant_vogais + 1;
        }
        else if (palavra[i] == 'o'){
            quant_vogais = quant_vogais + 1;
        }
        else if (palavra[i] == 'u'){
            quant_vogais = quant_vogais + 1;
        }
    }

    printf("O numero de vogais eh %d", quant_vogais);

    return 0;
}