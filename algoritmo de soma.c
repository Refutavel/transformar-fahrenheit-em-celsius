#include <stdio.h>
int main()
{
    // int: inteiros %d
    // char: armazena caracteres. %c
    // float: reais com ponto flutuante %.2f
    // double: armazena números com ponto flutuante, com precisão dupla, possui o dobro da capacidade de uma variável do tipo float. %i
   int a, b, soma;

   printf("Digite um numero: ");
   scanf("%d", &a);

   printf("Digite um numero: ");
   scanf("%d", &b);

   soma = a + b;
   
   printf("A soma dos numeros eh: %d e %d eh igual a %d\n", a, b, soma);


    return 0;
}

