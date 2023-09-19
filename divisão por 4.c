#include <stdio.h>

int main(){

    //double: armazena números com ponto flutuante, com precisão dupla.
    float num;

    printf("Digite um valor: ");
    scanf("%f", &num);

    float quartaParte = num / 4;

    printf("A quarta parte do numero eh: %.2f", quartaParte);

    return 0;
}