#include <stdio.h>

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    scanf("%[^\n]s", frase); // lê a frase inteira até pressionar enter

    int maiorTamanho = 0;  
    int tamanhoAtual = 0;  
    int inicioMaior = 0; 
    int inicioAtual = 0;

    for (int i = 0; ; i++) {
        if (frase[i] != ' ' && frase[i] != '\0') {
            if (tamanhoAtual == 0) {
                inicioAtual = i; // marca o início da palavra
            }
            tamanhoAtual++;
        } else {
            if (tamanhoAtual > maiorTamanho) {
                maiorTamanho = tamanhoAtual;
                inicioMaior = inicioAtual;
            }
            tamanhoAtual = 0; // reinicia o tamanho para a próxima palavra
        }

        if (frase[i] == '\0') {
            break;
        }
    }

    printf("A maior palavra da frase eh: ");
    for (int i = inicioMaior; i < inicioMaior + maiorTamanho; i++) {
        printf("%c", frase[i]);
    }
    printf("\n");

    return 0;
}