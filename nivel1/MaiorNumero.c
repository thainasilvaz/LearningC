#include <stdio.h> 

int main(){

    int numero1;
    int numero2;
    int maior;    

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1); //a função scanf modifica o valor da variável, e para isso, ela precisa saber onde na memória essa variável está localizada. O operador & fornece esse endereço, ao contrário do printf, que apenas exibe o valor sem alterá-lo. 

    printf("Digite outro numero inteiro: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) maior = numero1;
    else maior = numero2;

    printf("O maior numero eh o %d", maior);

}