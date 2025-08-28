#include <stdio.h>
#include <stdbool.h>

#define GRAU_MAX 10 //define o grau maximo -> 10
#define TAM (GRAU_MAX + 1) // numero de coeficientes (11 -> grau 0 ate grau 10)

//delcaracao das funcoes (Apenas por organizacao!)
void inicializarPolinomio(int p[]);

void lerPolinomio(int p[]);

void imprimirPolinomio(int p[], int tamanho);

void somarPolinomios(int p1[], int p2[], int resultado[]);

void subtrairPolinomios(int p1[], int p2[], int resultado[]);

void multiplicarPolinomios(int p1[], int p2[], int resultado[]);

int main() {
    int pol1[TAM]; //criacao do vetor pol1 que guarda os coeficientes do primeiro polinomio
    int pol2[TAM]; // criacao do vetor pol2 "
    int opcao; //criacao do vetor que controla a opcao selecionada pelo usuario
    bool lidos = false; // variavel usada para verificar se os polinomios ja foram lidos
    
    inicializarPolinomio(pol1); // inicializacao dos 2 polinomios (zerar os dois)
    inicializarPolinomio(pol2);
    
    do { //(menu)
        printf("=============== MENU ===============\n");
        printf("[1]. LER POLINOMIO\n");
        printf("[2]. SOMAR\n");
        printf("[3]. SUBTRAIR\n");
        printf("[4]. MULTIPLICAR\n");
        printf("[5]. SAIR\n");
        printf("ESCOLHA UMA OPCAO: \n");
        scanf("%d", &opcao);

        switch (opcao) { // ler polinomio
            case 1:
                //primeiro polinomio
                printf("Digite os coeficientes do primeiro polinomio: \n");
                lerPolinomio(pol1);
                printf("Polinomio lido:\n");
                imprimirPolinomio(pol1, TAM);
    
                //segundo polinomio
                printf("Digite os coeficientes do segundo polinomio: \n");
                lerPolinomio(pol2);
                printf("Polinomio lido:\n");
                imprimirPolinomio(pol2, TAM);

                lidos = true; // a variavel lidos se torna VERDADEIRO
                break;

            case 2: //soma
                if (!lidos) { // se lidos ainda for falso
                    printf("Os polinomio devem ser lidos primeiro. \n");
                } else {
                    int resultado[TAM]; // criacao do vetor resultado
                    inicializarPolinomio(resultado); //inicializa o vetor resultado (zera ele)
                    somarPolinomios(pol1, pol2, resultado); //soma os polinomios e guarda em resultado
                    printf("Polinomio 1: ");
                    imprimirPolinomio(pol1, TAM);
                    printf("Polinomio 2: ");
                    imprimirPolinomio(pol2, TAM);
                    printf("Soma: ");
                    imprimirPolinomio(resultado, TAM);
                }
                break;

            case 3: //subtracao
                if (!lidos) { // se lidos ainda for falso
                    printf("Os polinomio devem ser lidos primeiro. \n");
                } else {
                    int resultado[TAM]; // criacao do vetor resultado
                    inicializarPolinomio(resultado); //inicializa o vetor resultado (zera ele)
                    subtrairPolinomios(pol1, pol2, resultado); // subtrai os polinomios e guarda em resultado
                    printf("Polinomio 1: ");
                    imprimirPolinomio(pol1, TAM);
                    printf("Polinomio 2: ");
                    imprimirPolinomio(pol2, TAM);
                    printf("Subtracao: ");
                    imprimirPolinomio(resultado, TAM);
                }
                break;

            case 4: //multiplicacao
                if (!lidos) { // se lidos ainda for falso
                    printf("Os polinomio devem ser lidos primeiro. \n");
                } else {
                    int resultado[2 * TAM]; // O vetor resultado da operacao de multiplicacao deve ter tamanho minimo de 21, pois vai de grau 0 ate 20 (coloquei 22 por seguranca)
                    for (int i = 0; i < 2 * TAM; i++) { // inicializacao do vetor resultado, nao usei a funcao pois aqui o vetor tem tamanho 2 * TAM e na funcao tem TAM (daria erro)
                        resultado[i] = 0;
                    }
                    multiplicarPolinomios(pol1, pol2, resultado); // multiplica os polinomios e guarda no vetor resultado
                    printf("Polinomio 1: ");
                    imprimirPolinomio(pol1, TAM);
                    printf("Polinomio 2: ");
                    imprimirPolinomio(pol2, TAM);
                    printf("Multiplicacao: ");
                    imprimirPolinomio(resultado, 2 * TAM);
                }
                break;

            case 5: // caso o usuario digite 5 no menu
                printf("Saindo!\n");
                break;

            default: // caso digite algum numero diferente do esperado
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

void imprimirPolinomio(int p[], int tamanho) {
    int i;
    int primeiro = 1; // variavel para verificar se o primeiro valor ja foi lido (Em c, qualquer numero diferente de 0 e considerado verdadeiro, portanto, nessa parte eu poderia ter usado booleano ao inves de valor numerico)

    for (i = 0; i < tamanho; i++) {
        if (p[i] != 0) {
            if (primeiro) { //se for o primeiro termo do polinomio
                if (p[i] < 0) { //se ele for negativo imprime o "-" colado no numer (o + nao precisa pois nao esquevemos)
                    printf("-");
                }
                primeiro = 0; // como o primeiro termo ja foi lido ele se torna 0 (como dito antes, se torna falso)
            } else { //senao
                if (p[i] < 0) { // tratamento dos sinais dos outros termos do polinomio
                    printf(" - ");
                } else {
                    printf(" + ");
                }
            }
            // nesse trecho de cima (linha 146-159 eu trato so os sinais de cada termo dos polinomios)

            int valor; 
            if (p[i] < 0) {
                valor = -p[i];
            } else {
                valor = p[i];
            }
            // como eu ja tratei dos sinais, nesse trecho (162-167) eu faco o modulo de todos os termos do polinomio, porque se nao se o termo fosse negativo ficaria, por exemplo (x^2 - -x^3....)

            if (i ==0) { //grau 0
                printf("%d", valor); // x^0
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
            //aqui eu trato da impressao do polinomio em si, tendo 3 casos possiveis
        }
    }

    if (primeiro) {  //se tudo for 0
        printf("0");
    }

    printf("\n");
}

void somarPolinomios(int p1[], int p2[], int resultado[]) { // soma dos polinomios
    int i;
    for (i = 0; i < TAM; i++) {
        resultado[i] = p1[i] + p2[i];
    }
}

void subtrairPolinomios(int p1[], int p2[], int resultado[]) { // subtracao dos polinomios, bem parecido com a soma
    int i;
    for (i = 0; i < TAM; i++) {
        resultado[i] = p1[i] - p2[i];
    }
}

void multiplicarPolinomios(int p1[], int p2[], int resultado[]) {
    int i, j;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            resultado[i + j] += p1[i] * p2[j];
        }
    }
}
/*
na multiplicacao tem dois loops for pois na multiplicacao de polinomios voce multiplica todos os valores 
do primeiro polinomio por todos do segundo polinomio, ou seja para cada valor i do polinomio 1 eu vou multiplicar pelo
valor j do polinomio 2 (Seria basicamente o tal do "chuveirinho" da matematica). Entao cada item i do do loop for
de fora interage com cada j do loop de dentro. E o indice de resultado e i + j porque existem varias maneiras de 
formar um polinomio de mesmo grau, por exemplo, x^4 pode ser formado tanto por (x . x^3) quanto por (x^2 . x^2)
*/