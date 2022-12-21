#include <stdio.h>

int main() {
    int vector[1000];
    int counter = 0;

    while(scanf("%d", &vector[counter]) != EOF) {
        counter++;
    }


    for(int i = 0; i < counter; i++) {
        int smaller = i;

        for(int j = i + 1; j < counter; j++) {
            if(vector[smaller] > vector[j]) {
                smaller = j;
            }
        } 

        if(i != smaller) {
            int aux = vector[smaller];
            vector[smaller] = vector[i];
            vector[i] = aux;
        }
    }

    for(int i = 0; i < counter; i++) {
        printf("%d ", vector[i]);
    }
    
    return 0;
}

