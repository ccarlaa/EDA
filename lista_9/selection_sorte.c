#include <stdio.h>

int main() {
    int vector[1000];
    int counter = 0;

    while(scanf("%d", &vector[counter]) != EOF) {
        counter++;
    }


    for(int i = 0; i < counter; i++) {
        int position_one = i;
        int position_two = i;

        for(int j = i + 1; j <= counter; j++) {
            if(vector[i] > vector[j]) {
                position_two = j;
            }
        } 

        int aux = vector[position_two];
        vector[position_two] = vector[position_one];
        vector[position_one] = aux;
    }

    for(int i = 0; i < counter; i++) {
        printf("%d", vector[i]);
    }

    return 0;
}