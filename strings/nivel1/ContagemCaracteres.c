#include <stdio.h>

int main(){
    
    char palavra[100];
    int quantidade_caracteres = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    for(int i = 0; palavra[i] != '\0' ; i++){ //'\0' é o caractere nulo que marca o fim da string em C
        quantidade_caracteres = quantidade_caracteres + 1;
    }

    printf("A palavra possui %d caracteres.", quantidade_caracteres);
    
    return 0;
}