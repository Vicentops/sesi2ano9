#include <stdio.h>
int main() {
    int opcao;
    float velocidade;

    do {
        printf("\n1 - Km/h para m/s\n");
        printf("2 - m/s para km/h\n");
        printf("3 - Sair\n");
        scanf("%d", &opcao);

        if (opcao == 1) {
            scanf("%f", &velocidade);
            printf("%.2f m/s\n", velocidade / 3.6);
        } else if (opcao == 2) {
            scanf("%f", &velocidade);
            printf("%.2f km/h\n", velocidade * 3.6);
        } else if (opcao != 3) {
            printf("Opcao invalida\n");
        }

    } while (opcao != 3);

    return 0;
}