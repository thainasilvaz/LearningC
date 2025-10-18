#include <stdio.h>
#include <locale.h> // biblioteca usada para configurar a localidade do programa

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8"); //definindo configurações de localidade
    
    float numero1 = 0.0;
    float numero2 = 0.0;

    printf("Digite um número: ");
    scanf("%f", &numero1);

    printf("Digite outro número: ");
    scanf("%f", &numero2);

    float soma = numero1 + numero2;
    float subtracao = numero1 - numero2;
    float multiplicacao = numero1 * numero2;
    float divisao = numero1 / numero2;

    printf("A soma dos numeros é %.2f\n", soma);
    printf("A subtração dos numeros é %.2f\n", subtracao);
    printf("A multiplicacao dos numeros é %.2f\n", multiplicacao);
    printf("A divisao dos numeros é %.2f", divisao);

    return 0;
}