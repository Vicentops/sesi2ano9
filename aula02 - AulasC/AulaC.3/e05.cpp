#include <stdio.h>
int main() {
    int i, numero, soma = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma = soma + numero;
    }

    printf("Soma: %d\n", soma);

    return 0;
}