#include <stdio.h>

int main(){

    float temp_celsius;
    float temp_fahrenheit;

    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &temp_celsius);

    temp_fahrenheit = (temp_celsius * 9/5) + 32;
    printf("A temperatura equivalente em Fahrenheit eh %2.f", temp_fahrenheit);
    
}