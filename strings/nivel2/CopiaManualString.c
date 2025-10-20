#include <stdio.h>

void copiar(char *dest, char *orig){

    int i = 0;

    while(orig[i] != '\0'){
        dest[i] = orig[i];
        i++;
    }

    dest[i] = '\0'; //finalizando a string de destino

}

int main(){

    char origem[100];
    char destino[100];

    printf("Digite uma palavra: ");
    scanf("%s", origem);

    copiar(destino, origem);

    printf("Palavra original %s\n", origem);
    printf("Palavra copiada %s.", destino);

    return 0;
}