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

/* 4. Defina um programa para calcular o valor aproximado de π, utilizando o numero de termos
do somatorio abaixo recebido como dado de entrada:*/

#include <stdio.h>


int main() {
    int termos, k;
    double somatorio = 0.0, pi2_sobre_12;
    double raiz, raiz_antiga, epsilon = 1e-10; // precisão para a raiz quadrada

    printf("Digite o numero de termos: ");
    scanf("%d", &termos);

    for (k = 0; k < termos; k++) {
        double termo = (k % 2 == 0 ? 1.0 : -1.0) / ((k + 1) * (k + 1));
        somatorio += termo;
    }
    pi2_sobre_12 = somatorio * 12.0;
    raiz = pi2_sobre_12 / 2.0; // chute inicial
    do {
        raiz_antiga = raiz;
        raiz = (raiz_antiga + pi2_sobre_12 / raiz_antiga) / 2.0;
    } while ((raiz_antiga - raiz > epsilon) || (raiz - raiz_antiga > epsilon));

    printf("Aproximacao de pi: %.10f\n", raiz);

    return 0;
}



