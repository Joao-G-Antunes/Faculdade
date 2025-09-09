#ifndef TRIANGULO_H
#define TRIANGULO_H
typedef struct tri Triangulo;
Triangulo* cria_triangulo(float a, float b, float c);
float perimetro(Triangulo* t);
float area(Triangulo* t);
int forma_triangulo(Triangulo* t);
void libera(Triangulo* t);
#endif //TRIANGULO_H