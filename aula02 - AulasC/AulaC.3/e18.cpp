#include <stdio.h>
int main() {
    int n, i, numero, maior, quantidade = 0;

    printf("Quantos numeros serao lidos? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &numero);

        if (i == 1 || numero > maior) {
            maior = numero;
            quantidade = 1;
        } else if (numero == maior) {
            quantidade++;
        }
    }

    if (n > 0) {
        printf("Maior: %d\n", maior);
        printf("Vezes: %d\n", quantidade);
    }

    return 0;
}