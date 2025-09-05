#ifndef TRIANGULO_H
#define TRIANGULO_H

typedef struct {
    float base;
    float altura;
} Triangulo;

Triangulo* tri_cria(float base, float altura);
float tri_area(Triangulo* t);
float tri_hip(Triangulo* t);
void tri_libera(Triangulo* t);
 
#endif // TRIANGULO_H