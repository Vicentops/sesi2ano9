#include <stdio.h>
int main() {
    int n, i;
    float soma = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma = soma + 1.0 / i;
    }

    printf("H(n) = %.4f\n", soma);

    return 0;
}