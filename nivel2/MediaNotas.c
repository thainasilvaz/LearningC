#include <stdio.h>

int main(){

    float notas[5];
    float media;

    for(int i = 0; i < 5; i++){

    printf("Digite a nota do aluno %d: ", i + 1);
    scanf("%f", &notas[i]);

    }

    media = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4]) / 5;

    printf("A media das notas desses alunos eh %f", media);


}