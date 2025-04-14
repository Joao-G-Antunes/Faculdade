/**
 * ALUNO						MATRICULA
 * Joao Gabriel				    202504339
 * 
 * DESCRICAO DO TRABALHO:
 * Atividade 2
 *
 *		
 * 
 * DATA DE INICIO:	09/04/2025 
 * DATA FINAL:		14/04/2025
 **/

/* = INCLUSAO DE BIBLIOTECAS ================================================ */


/* 1. Defina um programa que leia tres valores inteiros e distintos e mostre-os em ordem cres
cente. Utilize uma selecao encadeada na definicao do algoritmo*/

#include <stdio.h>

int main(){
      int num1, num2, num3, menor, medio, maior;
      printf("Digite os numeros inteiros: ");
      scanf("%d %d %d", &num1, &num2, &num3);
      if (num1 <= num2 && num1 <= num3) {
        menor = num1;
        if (num2 <= num3) {
            medio = num2;
            maior = num3;
        } else {
            medio = num3;
            maior = num2;
        }
    } else if (num2 <= num1 && num2 <= num3) {
        menor = num2;
        if (num1 <= num3) {
            medio = num1;
            maior = num3;
        } else {
            medio = num3;
            maior = num1;
        }
    } else {
        menor = num3;
        if (num1 <= num2) {
            medio = num1;
            maior = num2;
        } else {
            medio = num2;
            maior = num1;
        }
    }
      printf("Os numeros em ordem crescente sao: %d, %d, %d.", menor, medio, maior);
 return 0;
}	
