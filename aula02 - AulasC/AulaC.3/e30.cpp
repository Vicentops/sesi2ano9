#include <stdio.h>
int main() {
    int n, i, soma = 0;

    printf("a) Digite n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma = soma + i;
    }

    printf("Resultado a: %d\n", soma);

    printf("b) Digite n: ");
    scanf("%d", &n);

    soma = 0;

    for (i = 1; i <= 2 * n - 1; i++) {
        if (i % 2 == 0) {
            soma = soma - i;
        } else {
            soma = soma + i;
        }
    }

    printf("Resultado b: %d\n", soma);

    printf("c) Digite n: ");
    scanf("%d", &n);

    soma = 0;

    for (i = 1; i <= 2 * n - 1; i = i + 2) {
        soma = soma + i;
    }

    printf("Resultado c: %d\n", soma);

    return 0;
}