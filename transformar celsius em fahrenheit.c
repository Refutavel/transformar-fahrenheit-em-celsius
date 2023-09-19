#include <stdio.h>

int main(){

    int c;

    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%d", &c);

    float f = c * (9.0/5.0) + 32.0;

    printf("O valor de Celsius em Fahrenheit eh: %.2lf", f);

    return 0;
}