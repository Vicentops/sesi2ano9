#include <stdio.h>
int main() {
    int i;
    float soma = 0;

    for (i = 1; i <= 50; i++) {
        soma = soma + (float)(2 * i - 1) / i;
    }

    printf("S = %.2f\n", soma);

    return 0;
}