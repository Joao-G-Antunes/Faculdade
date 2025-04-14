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

/* 2. Defina um programa que solicite o codigo correspondente a uma figura geometrica como
 na tabela abaixo e, em cada caso, solicite as informacoes necessarias para o calculo de area
 da figura correspondente. Retorne uma mensagem identificando qual e a figura e o valor
 de area calculado*/

#include <stdio.h>

int main(){
    int figura;
    float raio, base, altura, area;
    do {
      printf(" [1] TRIANGULO \n [2] QUADRADO \n [3] RETANGULO \n [4] CIRCUNFERENCIA \n De qual figura voce deseja calcular a area? ");
      scanf("%d", &figura);
    } while (figura != 1 && figura != 2 && figura != 3 && figura != 4);
    if (figura == 1) {
        printf("Base do triangulo: ");
        scanf("%f", &base);
        printf("Altura do triangulo: ");
        scanf("%f", &altura);
        area = (base * altura) / 2;
        printf("A area do triangulo e: %.2f", area);
    } else if (figura == 2) {
        printf("Base do quadrado: ");
        scanf("%f", &base);
        area = (base * base);
        printf("A area do quadrado e: %.2f", area);
    } else if (figura == 3) {
        printf("Base do retangulo: ");
        scanf("%f", &base);
        printf("Altura do retangulo: ");
        scanf("%f", &altura);
        area = (base * altura);
        printf("A area do retangulo e: %.2f", area);
    } else {
        printf("Raio da circunferencia: ");
        scanf("%f", &raio);
        area = (3.1415 * (raio * raio));
        printf("A area da circunferencia e: %.2f", area);
    }
 return 0;

}	