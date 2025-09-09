#include <stdio.h>
#include "triangulo.h"

int main() {
    float a, b, c;
    printf("Digite os lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    Triangulo* t = cria_triangulo(a, b, c);
    if (t == NULL) {
        printf("Lados invalidos para um triangulo.\n");
        return 1;
    }
    int tipo = forma_triangulo(t);
    if (tipo == 0) {
        printf("Os lados nao formam um triangulo.\n");
    } else {
        printf("Perímetro: %.2f\n", perimetro(t));
        printf("Área: %.2f\n", area(t));
        if (tipo == 1) {
            printf("Tipo: Equilatero\n");
        } else if (tipo == 2) {
            printf("Tipo: Isosceles\n");
        } else {
            printf("Tipo: Escaleno\n");
        }
    }
    libera(t);
    return 0;
}