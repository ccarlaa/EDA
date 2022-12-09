#include <stdio.h>

int numbers(int *vector, int limite, int i, int sum) {
    sum = sum + vector[i];

    if(vector[i] == 0) {
        return 0;
    }
    
    if(sum > limite) {
        numbers(vector, limite, i + 1, 0);

        printf("%d\n", vector[i]);
    }
    else {
        numbers(vector, limite, i + 1, sum);
    }
}

void main() {
    int vector[1000];
    int counter = 0;
    int limite = 0;
    int i = 0;

    while(1) {
        scanf("%d", &vector[counter]);

        if(vector[counter] == 0) {
            break;
        }

        counter++;
    }

    scanf("%d", &limite);

    numbers(vector, limite, 0, 0);
}