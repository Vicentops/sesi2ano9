#include <stdio.h>
int main() {
    int n, numero = 2, i, primo, quantidade = 0;
    long long soma = 0;

    scanf("%d", &n);

    while (quantidade < n) {
        primo = 1;

        for (i = 2; i < numero; i++) {
            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }

        if (primo == 1) {
            soma = soma + numero;
            quantidade++;
        }

        numero++;
    }

    printf("Soma: %lld\n", soma);

    return 0;
}