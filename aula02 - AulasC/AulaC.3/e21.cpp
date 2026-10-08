#include <stdio.h>
int main() {
    int a, b, i, aux;
    int soma = 0, multiplicacao = 1;

    scanf("%d %d", &a, &b);

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            soma = soma + i;
        } else {
            multiplicacao = multiplicacao * i;
        }
    }

    printf("Soma dos pares: %d\n", soma);
    printf("Multiplicacao dos impares: %d\n", multiplicacao);

    return 0;
}