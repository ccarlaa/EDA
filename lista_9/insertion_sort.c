#include <stdio.h>

int main() {
    int vector[50000];
    int counter = 0;

    while(scanf("%d", &vector[counter]) != EOF) {
        counter++;
    }

    int smaller = 0;

    for(int i = 1; i < counter; i++) {
        if(vector[smaller] > vector[i]) {
            smaller = i;
        }
    }

    int auxx = vector[0];
    vector[0] = vector[smaller];
    vector[smaller]= auxx;


    for(int i = 2; i < counter; i++) {
        int j = i;
        int number = vector[j];

        while(number < vector[j - 1]) {
            vector[j] = vector[j - 1];
            j--;
        }
        vector[j] = number;
    }

    for(int i = 0; i < counter; i++) {
        if(counter - 1 != i){
            printf("%d ", vector[i]);
        } else {
            printf("%d\n", vector[i]);
        }
    }

    return 0;
}
