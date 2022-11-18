#include <stdio.h>

void main() {
    int num_friends = 0;
    int result = 0;
    int soma = 0;

    scanf("%d", &num_friends);

    for(int i = 0; i < num_friends; i++) {
        int value = 0;

        scanf("%d", &value);

        soma += value;
    }

    scanf("%d", &result);

    if(result == soma) {
        printf("Acertou\n");
        return;
    }

    printf("Errou\n");

} 