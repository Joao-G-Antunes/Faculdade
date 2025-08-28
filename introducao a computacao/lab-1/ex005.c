#include <stdio.h>

int main() {
    float sal, desconto, taxa;
    taxa = 0.08;
    printf("Digite seu salario:");
    scanf("%f", &sal);
    desconto = taxa * sal;
    printf("Sera descontado %.2f do seu salario de %.2f, passando a ficar %.2f", desconto, sal, (sal-desconto));
return 0;
}