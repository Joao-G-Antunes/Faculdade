#include <stdio.h>
#include <string.h>
int main() {
	float angulo;
	char quadrante[25];
	printf("Digite o ângulo: ");
	scanf("%f", &angulo);
	while (angulo >= 360) angulo -= 360;
	while (angulo < 0) angulo += 360;
	if (angulo > 0 && angulo < 90) {
		strcpy(quadrante, "Primeiro quadrante");
	} else if (90 < angulo && angulo < 180) {
		strcpy(quadrante, "Segundo quadrante");
	} else if (180 < angulo && angulo < 270) {
		strcpy(quadrante, "Terceiro quadrante");
	} else {
		strcpy(quadrante, "Quarto quadrante");
	}
	printf("O ângulo se localiza no %s", quadrante);
  return 0;
}