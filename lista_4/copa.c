#include <stdio.h>
#include <stdlib.h>

int main() {
    int qtd_times = -1;
    int qtd_games = 0;
    char country_name[1000];

    while(scanf("%d %d", &qtd_times, &qtd_games)) {
        int qtd_ties = 0;
        int points = 0;
        int *results = malloc(qtd_games * sizeof(int));

        if(qtd_times == 0) {
            break;
        }

        for(int i = 0; i < qtd_times; i++) {
            scanf("%s %d", country_name, &results[i]);

            points += results[i];
        }

        qtd_ties = (qtd_games * 3) - points;

        printf("%d \n", qtd_ties);
    }

    return 0;
}