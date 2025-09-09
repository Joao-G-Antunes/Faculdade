#include <stdio.h>

int main() {
    int a, b;
    printf("Digite o primeiro numero:");
    scanf("%d", &a);
    printf("Digite o segundo numero:");
    scanf("%d", &b);
    printf("Soma: %d\n", a + b);
    printf("Produto: %d\n", a * b);
    if (a > b) {
        printf("O maior e: %d\n", a);
    
    } else if (b > a){
        printf("O maior e: %d\n", b);
    } else {
        printf("Os numeros sao iguais\n");
    }
}