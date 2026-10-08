#include <stdio.h>
int main() {
    int habitantes, i, codigo;
    float consumo, maior = 0, menor = 0;
    float soma = 0, media;
    float residencial = 0, comercial = 0, industrial = 0;
    float valorKwh, conta;
    
    printf("Numero de habitantes: ");
    scanf("%d", &habitantes);

    printf("Valor do kWh: ");
    scanf("%f", &valorKwh);

    for (i = 1; i <= habitantes; i++) {
        printf("Consumo do mes: ");
        scanf("%f", &consumo);

        printf("Codigo (1 residencial, 2 comercial, 3 industrial): ");
        scanf("%d", &codigo);

        if (i == 1) {
            maior = consumo;
            menor = consumo;
        } else {
            if (consumo > maior) {
                maior = consumo;
            }

            if (consumo < menor) {
                menor = consumo;
            }
        }

        soma = soma + consumo;

        if (codigo == 1) {
            residencial = residencial + consumo;
        } else if (codigo == 2) {
            comercial = comercial + consumo;
        } else if (codigo == 3) {
            industrial = industrial + consumo;
        }
    }

    if (habitantes > 0) {
        media = soma / habitantes;

        printf("Maior consumo: %.2f\n", maior);
        printf("Menor consumo: %.2f\n", menor);
        printf("Media: %.2f\n", media);
    }

    printf("Total residencial: %.2f kWh\n", residencial);
    printf("Total comercial: %.2f kWh\n", comercial);
    printf("Total industrial: %.2f kWh\n", industrial);

    conta = soma * valorKwh;
    printf("Valor total estimado: R$ %.2f\n", conta);

    return 0;
}