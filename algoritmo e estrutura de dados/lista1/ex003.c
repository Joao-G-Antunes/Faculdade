#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Ponto;

int main() {
    // Alocando dinamicamente
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));

    if (p == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    // Atribuindo valores
    p->x = 10;
    p->y = 20;

    // Imprimindo
    printf("Ponto: (%d, %d)\n", p->x, p->y);

    // Liberando memória
    free(p);

    return 0;
}
