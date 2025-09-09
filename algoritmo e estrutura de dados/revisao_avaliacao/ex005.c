#include <stdio.h>

int main () {
    float a;
    int parte_inteira;
    float parte_fracionaria;
    printf("Digite um numero real:");
    scanf("%f", &a);
    parte_inteira = (int)a;
    parte_fracionaria = a - parte_inteira;
    printf("Parte inteira: %d\nparte fracionaria: %.3f\n", parte_inteira, parte_fracionaria);
}