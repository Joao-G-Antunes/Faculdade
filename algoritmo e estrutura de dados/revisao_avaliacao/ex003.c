#include <stdio.h>

int main () {
    int n, num, soma = 0;    
    printf("Qantos numero deseja digitar? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma += num;   
    }
    printf("A media dos numeros e %.2f\n", (float)soma/n);
    return 0;
}