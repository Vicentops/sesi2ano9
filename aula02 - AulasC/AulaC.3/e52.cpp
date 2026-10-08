#include <stdio.h>
int main() {
    int valor, notas;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    if (valor < 0) {
        printf("Valor invalido.\n");
        return 0;
    }

    notas = valor / 100;
    printf("Notas de 100: %d\n", notas);
    valor = valor % 100;

    notas = valor / 50;
    printf("Notas de 50: %d\n", notas);
    valor = valor % 50;

    notas = valor / 20;
    printf("Notas de 20: %d\n", notas);
    valor = valor % 20;

    notas = valor / 10;
    printf("Notas de 10: %d\n", notas);
    valor = valor % 10;

    notas = valor / 5;
    printf("Notas de 5: %d\n", notas);
    valor = valor % 5;

    notas = valor / 2;
    printf("Notas de 2: %d\n", notas);
    valor = valor % 2;

    printf("Notas de 1: %d\n", valor);

    return 0;
}