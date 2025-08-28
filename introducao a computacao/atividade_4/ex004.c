#include<stdio.h>

int main()
{
    float mat1[3][2], mat2[2][4], mat3[3][4] = {0};
    int j, i, k;
    printf("Digite os valores da matriz A(3x2):\n ");//recebe matriz A
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%f", &mat1[i][j]);
        }
    }
    printf("Digite os valores da matriz B(2x4):\n ");//recebe matriz B
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%f", &mat2[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 2; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("\nMatriz A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.2f ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            printf("%.2f ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz C (A * B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%.2f   ", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}