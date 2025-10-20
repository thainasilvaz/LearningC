#include <stdio.h>

int main(){
    
    char frase[100];
    int quant_espacos = 0;

    printf("Digite uma palavra: ");
    scanf("%[^\n]s", frase); //lê a frase inteira até pressionar enter

    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == ' '){
            quant_espacos++;
        }
    }

    printf("A frase digitada tem %d palavras.", quant_espacos + 1);

    return 0;
}