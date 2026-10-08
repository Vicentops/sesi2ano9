#include <stdio.h>
int main() {
    int n;
    long long a = 0, b = 1, proximo;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    while (a <= n) {
        printf("%lld ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("%lld\n", a);

    return 0;
}