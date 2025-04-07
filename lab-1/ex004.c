#include <stdio.h>
#include <math.h>

int main() {
    float raio, vol, sup;
    printf("Digite o raio da esfera");
    scanf("%f", &raio);
    vol = (4 * 3.1415 * pow(raio, 3))/3;
    sup = 4 * 3.1415 * pow(raio, 2);
    printf("O volume da esfera e %.2f e a area e %.2f", vol, sup);
    
return 0;
}