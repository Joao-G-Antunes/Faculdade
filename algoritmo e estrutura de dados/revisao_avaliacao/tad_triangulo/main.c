#include <stdio.h>
#include "triangulo.h"
int main () {
    Triangulo* t = tri_cria(3.0, 4.0);

    if (t == NULL) {
        printf("Erro ao criar triangulo\n"); 
        return 1;
    }

    printf("Area: %.2f\n", tri_area(t));
    printf("Hipotenusa: %.2f\n", tri_hip(t));
    tri_libera(t);
    
    return 0;
}