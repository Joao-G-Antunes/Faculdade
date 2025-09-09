#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main() {
    Pessoa* p = (Pessoa*) malloc(sizeof(Pessoa));
    scanf("%s %d %f", p->nome, &p->idade, &p->altura);
    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);    
    printf("Altura: %.2f\n", p->altura);
    free(p);
    return 0;
}