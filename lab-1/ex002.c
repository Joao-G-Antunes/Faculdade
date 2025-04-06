#include <stdio.h>

int main() {
    float sal_min, sal;
    printf("Digite o valor do salario minimo e do seu salario: ");
    scanf("%f %f", &sal_min, &sal);
    printf("Voce recebe %.2f salarios minimos por mes", (sal/sal_min));
return  0;
}
