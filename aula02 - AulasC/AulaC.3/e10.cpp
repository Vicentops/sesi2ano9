#include <stdio.h>
int main() {
    int i, soma = 0;

    for (i = 2; i <= 100; i = i + 2) {
        soma = soma + i;
    }

    printf("Soma: %d\n", soma);

    return 0;
}