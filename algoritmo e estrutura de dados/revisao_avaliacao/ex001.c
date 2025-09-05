#include <stdio.h>

int main () {
    int num1, num2, soma;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("A soma e %.2d\n", soma);

    return 0;
}