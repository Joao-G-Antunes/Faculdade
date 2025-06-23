#include <stdio.h>
#include <stdbool.h>

#define GRAU_MAX 10 //define o grau maximo -> 10
#define TAM (GRAU_MAX + 1) // numero de coeficientes (11 -> grau 0 ate grau 10)

//delcaracao das funcoes
void inicializarPolinomio(int p[]);

void lerPolinomio(int p[]);

void imprimirPolinomio(int p[]);




int main() {
    int pol1[TAM]; //criacao do vetor pol1 que guarda os coeficientes do primeiro polinomio
    int pol2[TAM];
    int opcao;
    //verificacao
    bool lidos = false;
    
    inicializarPolinomio(pol1);
    inicializarPolinomio(pol2);
    
    do {
        printf("=============== MENU ===============\n");
        printf("[1]. LER POLINOMIO\n");
        printf("[2]. SOMAR\n");
        printf("[3]. SUBTRAIR\n");
        printf("[4]. MULTIPLICAR\n");
        printf("[5]. SAIR\n");
        printf("ESCOLHA UMA OPCAO: \n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                //primeiro polinomio
                printf("Digite os coeficientes do primeiro polinomio: \n");
                lerPolinomio(pol1);
                printf("Polinomio lido:\n");
                imprimirPolinomio(pol1);
    
                //segundo polinomio
                printf("Digite os coeficientes do segundo polinomio: \n");
                lerPolinomio(pol2);
                printf("Polinomio lido:\n");
                imprimirPolinomio(pol2);

                lidos = true;
                break;

            case 2:
                if (!lidos) {
                    printf("Os polinomio devem ser lidos primeiro. \n");
                } else {

                }
                break;

            case 3:
                if (!lidos) {
                    printf("Os polinomio devem ser lidos primeiro. \n");
                } else {

                }
                break;

            case 4: 
                if (!lidos) {
                    printf("Os polinomio devem ser lidos primeiro. \n");
                } else {

                }
                break;

            case 5: 
                printf("Saindo!\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente!\n");
        }
    
    } while (opcao != 5);
    

    return 0;
}







//implementacao das funcoes
void inicializarPolinomio(int p[]) { //inicializa o vetor zerando os valores
    int i;
    for (i = 0; i < TAM; i++) {
        p[i] = 0;
    }
}

void lerPolinomio(int p[]) { //recebe o coeficiente de cada x
    int i;
    for (i = 0; i < TAM; i++) {
        printf("Coeficiente de x^%d: ", i);
        scanf("%d", &p[i]);
    }
}

void imprimirPolinomio(int p[]) {
    int i;
    int primeiro = 1;

    for (i = 0; i < TAM; i++) {
        if (p[i] != 0) {
            if (primeiro) { //se for o primeiro termo do polinomio
                if (p[i] < 0) {
                    printf("-");
                }
                primeiro = 0;
            } else { //senao
                if (p[i] < 0) {
                    printf(" - ");
                } else {
                    printf(" + ");
                }
            }

            int valor;
            if (p[i] < 0) {
                valor = -p[i];
            } else {
                valor = p[i];
            }

            if (i ==0) { //grau 0
                printf("%d", valor);
            } else if (valor == 1) { //coeficiente 1
                printf("x");
                if (i > 1) {
                    printf("^%d", i);
                }
            } else { //caso geral
                printf("%d*x", valor);
                if (i > 1) {
                    printf("^%d", i);
                }
            }
        }
    }

    if (primeiro) {  //se tudo for 0
        printf("0");
    }

    printf("\n");
}