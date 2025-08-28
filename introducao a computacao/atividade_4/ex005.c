#include <stdio.h>
#include <stdbool.h>

int main() {
    int matriz[4][4], i, j;
    bool triangular_superior = true, triangular_inferior = true, diagonal = true, nula = true, identidade = true;

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i > j && matriz[i][j] != 0) triangular_inferior = false;
            if (i < j && matriz[i][j] != 0) triangular_superior = false;
            if (i != j && matriz[i][j] != 0) diagonal = false;
            if (matriz[i][j] != 0) nula = false;
            if (i == j && matriz[i][j] != 1) identidade = false;
            if (i != j && matriz[i][j] != 0) identidade = false;
        }
    }

    printf("A matriz e:\n");
    if (nula) printf("- Nula\n");
    if (triangular_superior) printf("- Triangular Superior\n");
    if (triangular_inferior) printf("- Triangular Inferior\n");
    if (diagonal) printf("- Diagonal\n");
    if (identidade) printf("- Identidade\n");
    if (!nula && !triangular_superior && !triangular_inferior && !diagonal && !identidade) {
        printf("- Nenhuma das anteriores\n");
    }
    return 0;
}