#include <stdio.h>
int main() {
    int i;
    long long soma = 0, quadrados = 0;

    for (i = 1; i <= 100; i++) {
        soma = soma + i;
        quadrados = quadrados + (long long)i * i;
    }

    printf("Diferenca: %lld\n", soma * soma - quadrados);

    return 0;
}