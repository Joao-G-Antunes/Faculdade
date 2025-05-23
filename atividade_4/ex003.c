#include<stdio.h>

int main()
{
    int vet[10], i, j, temp;
    
    printf("Digite os 10 valores do vetor: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (vet[j] > vet[j + 1]) {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
    printf("Vetor ordenado com o maior elemento na ultima posicao:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    return 0;
}