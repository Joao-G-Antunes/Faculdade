#include <stdio.h>

typedef struct {
    float largura;
    float altura;
} Retangulo;

// Função que altera o retângulo original
void redimensionar(Retangulo *r, float fator) {
    r->largura *= fator;
    r->altura *= fator;
}

int main() {
    Retangulo r = {5.0, 3.0};

    printf("Antes da redimensionar:\n");
    printf("Largura: %.2f, Altura: %.2f, Area: %.2f\n", 
            r.largura, r.altura, r.largura * r.altura);

    // Chama a função passando o endereço
    redimensionar(&r, 2.0);

    printf("Depois da redimensionar:\n");
    printf("Largura: %.2f, Altura: %.2f, Area: %.2f\n", 
            r.largura, r.altura, r.largura * r.altura);

    return 0;
}
