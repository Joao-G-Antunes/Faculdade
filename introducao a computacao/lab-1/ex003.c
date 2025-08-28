#include <stdio.h>

int main() {
    float base, altura;
    printf("Digite a base e a altura do triangulo: ");
    scanf("%f %f", &base, &altura);
    printf("A area do triangulo e: %.2f", (base * altura)/2);
return 0;
}