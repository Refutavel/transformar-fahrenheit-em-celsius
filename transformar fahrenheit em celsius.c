#include <stdio.h>

int main(){

    double f;

    printf("Digite a Temperatura em graus Fahrenheit: ");
    scanf("%lf", &f);

    int c = 5.0 * (f - 32.0)/9.0;

    printf("A temperatura em Celsius eh: %d", c);

    return 0;
}