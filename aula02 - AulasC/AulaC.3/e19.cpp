#include <stdio.h>
int main() {
    int n, centena, dezena, unidade;

    scanf("%d", &n);

    if (n >= 100 && n <= 999) {
        centena = n / 100;
        dezena = (n / 10) % 10;
        unidade = n % 10;

        printf("%d\n", centena);
        printf("%d\n", dezena);
        printf("%d\n", unidade);
    } else {
        printf("Numero invalido\n");
    }

    return 0;
}