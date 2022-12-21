#include <stdio.h>

// #define LESS(A, B) (A > B)
// #define EXCH(A, B) ({int t = A; A = B; B = t;})
// #define CMPEXCH(A, B) ({(LESS(A, B)) ? EXCH(B, A) : 0;})

int main() {
    int vector[1000];
    int counter = 0;

    while(scanf("%d", &vector[counter]) != EOF) {
        counter++;
    }

    for(int i = 1; i < counter; i++) {
        for(int j = 0; j < counter - 1; j++) {
            CMPEXCH(vector[j], vector[j + 1]);
        } 
    }
    
    for(int i = 0; i < counter; i++) {
        printf("%d", vector[i]);
    }

    return 0;
}
