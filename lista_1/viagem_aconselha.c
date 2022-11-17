#include <stdio.h>

int main() {
    int quantidade_restaurantes = 0;
    int maior_avaliacao = -1;
    long int menor_codigo = 0;
    int quantidade_operacoes = 0;
    long int codigo_restaurante = 0;
    int nota_restaurante = 0;

    while(1) {
        quantidade_operacoes++;
        
        int ret = scanf(" %d", &quantidade_restaurantes);

        if(ret != 1) {
            break;
        }

        for(int i = 0; i < quantidade_restaurantes; i++) {
            scanf(" %ld %d", &codigo_restaurante, &nota_restaurante);

            if(maior_avaliacao < nota_restaurante) {
                maior_avaliacao = nota_restaurante;
                menor_codigo = codigo_restaurante;
            }

            if(nota_restaurante == maior_avaliacao && menor_codigo > codigo_restaurante) {
                menor_codigo = codigo_restaurante;
            }
        }

        printf("Dia %d\n", quantidade_operacoes);
        printf("%ld\n", menor_codigo);
        printf("\n");

        maior_avaliacao = -1;
        menor_codigo = 0;
    }

    return 0;
}