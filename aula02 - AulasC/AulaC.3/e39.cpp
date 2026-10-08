#include <stdio.h>
int main() {
    float base, altura, area;

    do {
        printf("Digite a base: ");
        scanf("%f", &base);

        printf("Digite a altura: ");
        scanf("%f", &altura);

        if (base <= 0 || altura <= 0) {
            printf("Valores invalidos. Tente novamente.\n");
        }
    } while (base <= 0 || altura <= 0);

    area = (base * altura) / 2;

    printf("Area: %.2f\n", area);

    return 0;
}