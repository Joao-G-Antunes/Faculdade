#include <stdio.h>

int main() {
	int dia, mes, ano, dias_mes;
	printf("Digite a data no formato DD MM AAAA");
	scanf("%d %d %d", &dia, &mes, &ano);
	int data_valida = 1; 
	if (dia < 1 || mes < 1 || mes > 12 || ano < 1) {
		data_valida = 0;
	} else {
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
			dias_mes = 31;
		} else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
			dias_mes = 30;
		} else if (mes == 2) {
			dias_mes = 28;
		}
	}
	if (dia > dias_mes) {
			data_valida = 0;
	} if (data_valida) {
		printf("Data Válida.\n");
	} else {
		printf("Data Inválida.\n");
	}

  return 0;
}