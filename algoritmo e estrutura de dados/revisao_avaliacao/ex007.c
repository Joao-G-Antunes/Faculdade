#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float base;
    float altura;
} Retangulo;

int main() {
    Retangulo* r = (Retangulo*) malloc(sizeof(Retangulo));
    scanf("%f %f", &r->base, &r->altura);
    printf("Area: %.2f\n", r->base * r->altura);
    free(r);
}