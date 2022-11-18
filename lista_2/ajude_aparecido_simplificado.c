#include <stdio.h>

void main() {
    int val_um, val_dois, val_tres;
    int result = 0;

    scanf("%d %d %d", &val_um, &val_dois, &val_tres);
    scanf("%d", &result);

    int soma = val_um + val_dois + val_tres;

    if(soma == result) {
        printf("Acertou\n");
        return;
    }

    printf("Errou\n");

}