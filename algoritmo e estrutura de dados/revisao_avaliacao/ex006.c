#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Aluno;

int main() {
    Aluno* a = (Aluno*) malloc(sizeof(Aluno));

    scanf("%s %d %f", a->nome, &a->matricula, &a->nota);

    printf("Nome: %s\n", a->nome);
    printf("Matricula: %d\n", a->matricula);
    printf("Nota: %.2f\n", a->nota);

    free(a);
    return 0;
}
