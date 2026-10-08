#include <stdio.h>
int main() {
    int a, b, n, i, primo, quantidade = 0, aux;

    scanf("%d %d", &a, &b);

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    for (n = a; n <= b; n++) {
        if (n < 2) {
            continue;
        }

        primo = 1;

        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }

        if (primo == 1) {
            quantidade++;
        }
    }

    printf("Quantidade de primos: %d\n", quantidade);

    return 0;
}