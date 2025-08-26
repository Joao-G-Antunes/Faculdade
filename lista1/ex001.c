#include <stdio.h>

typedef struct {
    float largura;
    float altura;
} Retangulo;

int main() {
    Retangulo r;

    // Atribuindo valores
    r.largura = 5.0;
    r.altura = 3.0;

    // Calculando área
    float area = r.largura * r.altura;

    printf("Retangulo:\n");
    printf("Largura: %.2f\n", r.largura);
    printf("Altura: %.2f\n", r.altura);
    printf("Area: %.2f\n", area);

    return 0;
}
