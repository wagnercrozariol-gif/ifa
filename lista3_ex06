#include <stdio.h>

int main() {
    int x, a, b;

    do {
        printf("Digite um valor positivo (X): ");
        scanf("%d", &x);
        if (x <= 0) {
            printf("Erro! O valor deve ser positivo.\n");
        }
    } while (x <= 0);

    printf("Digite o valor inicial do intervalo (A): ");
    scanf("%d", &a);

    printf("Digite o valor final do intervalo (B), maior que A: ");
    scanf("%d", &b);

    while (b <= a) {
        printf("Erro! B deve ser maior que A.\n");
        printf("Digite novamente o valor de B: ");
        scanf("%d", &b);
    }

    for (int i = b; i >= a; i--) {
        printf("%d x %d = %d\n", x, i, x * i);
    }

    return 0;
}
