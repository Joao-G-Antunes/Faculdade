#include <stdio.h>

// passo 1 -> somar numero com seu reverso
int passo1(int numero) {
    int reverso = 0, temp = numero;
    while (temp > 0) {
        reverso = reverso * 10 + (temp % 10);
        temp /= 10;
    }
    return numero + reverso;
}

// passo 2 -> multiplicar cada dígito por sua ordem posicional (1 a n)
int passo2(int soma) {
    char str[20];
    sprintf(str, "%d", soma);
    int soma_produtos = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        int digito = str[i] - '0';
        soma_produtos += digito * (i + 1);
    }

    return soma_produtos;
}

// passo 3 -> extrair dígito verificador (mod 10)
void passo3(int codigo_verificador) {
    int digito = codigo_verificador % 10;
    printf("O codigo verificador e: %d\n", digito);
}

int main() {
    int numero;
    printf("Digite o numero da conta corrente (5 digitos): ");
    scanf("%d", &numero);

    int soma = passo1(numero);
    int resultado = passo2(soma);
    passo3(resultado);

    return 0;
}
