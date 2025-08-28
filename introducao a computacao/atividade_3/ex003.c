/**
 * ALUNO						MATRICULA
 * Joao Gabriel				    202504339
 * 
 * DESCRICAO DO TRABALHO:
 * Atividade 3
 *
 *		
 * 
 * DATA DE INICIO:	23/04/2025 
 * DATA FINAL:		30/04/2025
 **/

/* = INCLUSAO DE BIBLIOTECAS ================================================ */


/*Escreva um programa que, para quaisquer m pertence N e n pertence N, calcule e mostre o maximo
dividor comum entre eles (sem a utilizacao de recursao).*/

//maximo divisor comum
#include <stdio.h>

#include <stdio.h>

int main() {
    int m, n, resto;
    
    printf("Digite dois numeros naturais (m e n,  n > 0): ");
    scanf("%d %d", &m, &n);
    
    if (n == 0) {
        printf("n deve ser maior que zero!\n");
        return 1;
    }
    
    // Algoritmo de Euclides
    while (n != 0) {
        resto = m % n;
        m = n;
        n = resto;
    }
    
    printf("MDC = %d\n", m);
    return 0;
}