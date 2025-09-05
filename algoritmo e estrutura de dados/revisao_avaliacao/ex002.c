#include <stdio.h>

int main () {
    float num1, parteInteira, parteDecimal;
    printf("Digite um nummero real: ");
    scanf("%f", &num1);
    parteInteira = (int)num1;
    parteDecimal = num1 - parteInteira;
    printf("A parte inteira e %.0f e a parte decimal e %.3f\n", parteInteira, parteDecimal);
    return 0;
}