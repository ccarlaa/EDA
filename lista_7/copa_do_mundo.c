#include <stdio.h>

void main() {
    char letter[16] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
    int gamers[16];
    int second_phase[8];
    int third_phase[4];
    int fifth_phase[2];
    int counter = 0;

    for(int i = 0; i < 16; i = i + 2) {
        scanf("%d %d", &gamers[i], &gamers[i + 1]);

        if(gamers[i] < gamers[i + 1]) {
            second_phase[counter] = i + 1;
        }
        else {
            second_phase[counter] = i;
        }

        counter++;
    }

    counter = 0;

    for(int i = 0; i < 8; i = i + 2) {
        scanf("%d %d", &gamers[i], &gamers[i + 1]);

        if(gamers[i] < gamers[i + 1]) {
            third_phase[counter] = second_phase[i + 1];
        }
        else {
            third_phase[counter] = second_phase[i];
        }

        counter++;
    }

    counter = 0;

    for(int i = 0; i < 4; i = i + 2) {
        scanf("%d %d", &gamers[i], &gamers[i + 1]);

        if(gamers[i] < gamers[i + 1]) {
            fifth_phase[counter] = third_phase[i + 1];
        }
        else {
            fifth_phase[counter] = third_phase[i];
        }

        counter++;
    }

    scanf("%d %d", &gamers[0], &gamers[1]);

    if(gamers[0] < gamers[1]) {
        printf("%c", letter[fifth_phase[1]]);
    }
    else {
        printf("%c", letter[fifth_phase[0]]);
    }
    
}