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


/*1. Defina um programa que, para qualquer natural recebido como dado de entrada, imprima
os n primeiro termos de uma sequ^encia como a de Fibonacci mas com os valores dos dois
primeiros termos fornecidos pelo usuario.
*/

#include <stdio.h>

int main() {
    int a, b, n;
    int ultimo_termo, penultimo_termo, proximo_termo;
    int cont = 2;
    
    printf("Quais os numeros naturais iniciarao a sequencia e quantos termos dela voce deseja ver? ");
    scanf("%d %d %d", &a, &b, &n);
    
    // Inicializa os termos
    penultimo_termo = a;
    ultimo_termo = b;
    
    printf("Sequencia: %d, %d", penultimo_termo, ultimo_termo);
    
    while (cont < n) {
        proximo_termo = penultimo_termo + ultimo_termo;
        printf(", %d", proximo_termo);
        
        // Atualiza os termos
        penultimo_termo = ultimo_termo;
        ultimo_termo = proximo_termo;
        cont++;
    }
    
    printf("\n");
    return 0;
}