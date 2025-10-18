#include <stdio.h>


int main(){

    int x = 10;
    int * pointer = &x;
    * pointer = 20;

    printf("O valor de x eh %d\n", x);


}
