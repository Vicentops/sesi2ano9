#include <stdio.h>
int main() {
    float salario = 2000, aumento = 1.5;
    int ano;

    salario = salario + salario * aumento / 100;

    for (ano = 1997; ano <= 2026; ano++) {
        aumento = aumento * 2;
        salario = salario + salario * aumento / 100;
    }

    printf("Salario atual: %.2f\n", salario);

    return 0;
}