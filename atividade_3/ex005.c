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
/*5. Considerando o metodo babil^onico para aproximacao do calculo de p
q, defina um programa (sem a utilizacao de recursao) que utilize como criterio de parada o valor do erro
absoluto, recebido como parametro:  */

#include <stdio.h>

int main() {
    double q, x, x_antigo, erro, epsilon;

    printf("Digite o valor de q: ");
    scanf("%lf", &q);

    printf("Digite o valor de epsilon: ");
    scanf("%lf", &epsilon);

    x = q / 2.0; // chute inicial
    do {
        x_antigo = x;
        x = (x_antigo + q / x_antigo) / 2.0;
    } while ( (x_antigo - x > epsilon) || (x - x_antigo > epsilon) );

    printf("Aproximacao da raiz quadrada de %.10f: %.10f\n", q, x);

    return 0;
}
