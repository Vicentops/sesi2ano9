#include <stdio.h>
int main() {
    int i, j, fatorial;
    float soma = 0;

    for (i = 0; i < 5; i++) {
        fatorial = 1;

        for (j = 1; j <= 2 * i; j++) {
            fatorial = fatorial * j;
        }

        if (i == 0) {
            soma = soma + 0;
        } else {
            soma = soma + (float)i / fatorial;
        }
    }

    printf("Soma: %.4f\n", soma);

    return 0;
}