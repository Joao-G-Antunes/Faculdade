#include <stdio.h>

int main() {
	int n1, n2, operacao,resultado;
	
	printf("Digite os valores: ");
	scanf("%d %d", &n1,& n2);
	do {
		printf("Qual operação você deseja realizar? \n [0] + \n [1] - \n [2] * \n [3] / \n");
		scanf("%d", &operacao);
	} while (operacao != 1 && operacao != 2 && operacao != 3 && operacao != 0);
	if (operacao == 0) {
		resultado = n1 + n2;
		printf("%.2d + %.2d = %.2d", n1, n2, resultado);
	}
	if (operacao == 1) {
		resultado = n1 - n2;
		printf("%.2d - %.2d = %.2d", n1, n2, resultado);
	}
	if (operacao == 2) {
		resultado = n1 * n2;
		printf("%.2d * %.2d = %.2d", n1, n2, resultado);
	}
	if (operacao == 3) {
		resultado = n1 / n2;
		printf("%.2d / %.2d = %.2d", n1, n2, resultado);
	}
  return 0;
}