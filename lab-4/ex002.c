#include <stdio.h>

int main() {
	float a, b, c, sen, cos, tg;
	float hip, cat1, cat2;
	printf("Digite o valor dos lados:");
	scanf("%f %f %f", &a, &b, &c);
	//verificar se é um triângulo válido
	if (a + b > c && a + c > b && b + c > a) {
		//verifica se o triângulo é retângulo
		if ((a*a + b*b == c*c) || (c*c + b*b == a*a) || (c*c + a*a == b*b)) {
			printf("É possível formar um triângulo retângulo.\n");
			//determina a hipotenusa e catetos
			if (a*a ==b*b + c*c) {
				hip = a; cat1 = b; cat2 = c;
			} else if (b*b == c*c + a*a) {
				hip = b; cat1 = c; cat2 = a;
			} else if (c*c == b*b + a*a) {
				hip = c; cat1 = b; cat2 = a;
			}
			//calcula o seno e cosseno
			sen = (float)cat2 / hip;
			cos  = (float)cat1 / hip;
			tg = (float)cat2 / cat1;
			printf("Seno: %.2f Cosseno: %.2f Tang.: %.2f", sen, cos, tg);
		} else {
			printf("É possível formar um triângulo, porém não retângulo.\n");
		}
	} else {
		printf("Não é possível formar um triângulo.\n");
	}
  return 0;
}