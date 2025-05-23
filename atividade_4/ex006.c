#include <stdio.h>

int main() {
    int matriz[5][5], temp, i, j;

    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (j = 0; j < 5; j++) {
        temp = matriz[1][j];
        matriz[1][j] = matriz[3][j];
        matriz[3][j] = temp;
    }
    for (i = 0; i < 5; i++) {
        temp = matriz[i][0];
        matriz[i][0] = matriz[i][2];
        matriz[i][2] = temp;
    }
    for (i = 0; i < 5; i++) {
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][4 - i];
        matriz[i][4 - i] = temp;
    }
    printf("Matriz resultante:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}