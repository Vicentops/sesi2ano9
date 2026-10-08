#include <stdio.h>
int main() {
    int n, i, j;
    double fatorial, e = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial = 1;

        for (j = 1; j <= i; j++) {
            fatorial = fatorial * j;
        }

        e = e + 1.0 / fatorial;
    }

    printf("E = %.4f\n", e);

    return 0;
}