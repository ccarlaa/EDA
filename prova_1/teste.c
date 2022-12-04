#include <stdio.h>

int soma_anterior;
int meio_vetor = 0;

int balanceada(int *vetor, int inicio, int fim) {
    int soma = *(vetor + inicio) + *(vetor + fim);

    if(inicio == 0) {
        soma_anterior = soma;
        meio_vetor = (fim - 1) / 2;
    }

    if(soma == soma_anterior) {
        if(inicio == meio_vetor) {
            return 1;
        }
        soma_anterior = soma;
        balanceada(vetor, inicio + 1, fim - 1);
    } else {
        return 0;
    }
}

int main() {
    int vetor[4];
    for(int i = 0; i < 4; i++) {
        int a;
        scanf("%d", &a);
        vetor[i] = a;
    }
    int answer = balanceada(vetor, 0, 3);
    printf("%d", answer);
}