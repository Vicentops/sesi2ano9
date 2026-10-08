#include <stdio.h>
int main() {
    int n;

    scanf("%d", &n);
    n++;

    while (n % 11 != 0 && n % 13 != 0 && n % 17 != 0) {
        n++;
    }

    printf("Resultado: %d\n", n);

    return 0;
}