#include <stdio.h>
int main() {
    float r1, r2, r;

    do {
        printf("Digite R1 (0 para sair): ");
        scanf("%f", &r1);

        if (r1 != 0) {
            printf("Digite R2: ");
            scanf("%f", &r2);

            if (r2 != 0 && r1 + r2 != 0) {
                r = (r1 * r2) / (r1 + r2);
                printf("Resistencia: %.2f\n", r);
            }
        }

    } while (r1 != 0);

    return 0;
}