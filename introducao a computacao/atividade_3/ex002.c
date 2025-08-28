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


/*Defina um programa que calcule o valor de S determinado por*/

#include <stdio.h>
int main() {
    int n = 10, a = 1;
    double soma = 0.0; //double -> armazena numeros reais
    do {
        double termo = (double)a / (a * a); //numerador = a; denominador = a^2
        //alterna a sequencia entre subtração e soma
        if (a % 2 == 0) {
            soma -= termo;
        } else {
            soma += termo;
        }
        a++;
    
    } while (a <= n);
    printf("S = %.4f", soma);
return 0;
}