#include <stdio.h>

int main() {
    int n;

    do {
        printf("Digite a quantidade de valores (N), entre 1 e 19: ");
        scanf("%d", &n);
        if (n <= 0 || n >= 20) {
            printf("Erro! N deve ser positivo e menor que 20.\n");
        }
    } while (n <= 0 || n >= 20);

    int valores[19];
    int soma = 0, maior, menor;
    int qtdPositivos = 0, qtdNegativos = 0;

    for (int i = 0; i < n; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];

        if (valores[i] > 0) qtdPositivos++;
        if (valores[i] < 0) qtdNegativos++;
    }

    maior = menor = valores[0];
    for (int i = 1; i < n; i++) {
        if (valores[i] > maior) maior = valores[i];
        if (valores[i] < menor) menor = valores[i];
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Soma dos valores: %d\n", soma);
    printf("Media aritmetica: %.2f\n", soma / (float) n);
    printf("Percentual de positivos: %.2f%%\n", (qtdPositivos * 100.0) / n);
    printf("Percentual de negativos: %.2f%%\n", (qtdNegativos * 100.0) / n);

    return 0;
}
