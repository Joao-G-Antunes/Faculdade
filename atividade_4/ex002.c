#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], resultado[5];
    char operacoes[5];
    int i;

    printf("Digite os 5 elementos do primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os 5 elementos do segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    printf("Digite as 5 operacoes (+, -, *, /):\n");
    for (i = 0; i < 5; i++) {
        scanf(" %c", &operacoes[i]);
    }

    for (i = 0; i < 5; i++) {
        switch (operacoes[i]) {
            case '+':
                resultado[i] = vetor1[i] + vetor2[i];
                break;
            case '-':
                resultado[i] = vetor1[i] - vetor2[i];
                break;
            case '*':
                resultado[i] = vetor1[i] * vetor2[i];
                break;
            case '/':
                if (vetor2[i] != 0) {
                    resultado[i] = vetor1[i] / vetor2[i];
                } else {
                    printf("Divisão por zero na posicao %d!\n", i);
                    resultado[i] = 0;
                }
                break;
            default:
                printf("Operação inválida na posicaoo %d!\n", i);
                resultado[i] = 0;
        }
    }

    printf("Resultado das operacoes:\n ");
    for (i = 0; i < 5; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");
    return 0;
}