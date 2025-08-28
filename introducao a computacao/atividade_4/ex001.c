#include <stdio.h>

int main() {
    float vetor1[10], vetor2[10], produto_escalar = 0;
    int i;

    printf("Digite os 10 elementos do primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor1[i]);
    }

    printf("Digite os 10 elementos do segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor2[i]);
    }

    for (i = 0; i < 10; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }

    printf("O produto escalar e: %.2f\n", produto_escalar);
    return 0;
}