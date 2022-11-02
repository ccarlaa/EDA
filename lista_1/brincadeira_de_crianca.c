#include <stdio.h>

int main() {
    int num_of_games = 1;
    int result = 0;
    int alice_points = 0;
    int beto_points = 0;

    while(1) {
        scanf("%i", &num_of_games);

        if(num_of_games == 0) {
            break;
        }

        for(int i = 0; i < num_of_games; i++) {
            scanf("%i", &result);

            if(result == 0) {
                alice_points++;
            } 
            else {
                beto_points++;
            }
        }
        
        printf("Alice ganhou %d e Beto ganhou %d\n", alice_points, beto_points);
        
        alice_points = 0;
        beto_points = 0;
    }
}