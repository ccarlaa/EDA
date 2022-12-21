#include <stdio.h>

#define LESS(A, B) (A > B)
#define EXCH(A, B) ({int t = A; A = B; B = t;})
#define CMPEXCH(A, B) ({(LESS(A, B)) ? EXCH(B, A) : 0;})

int main() {
    int vector[1000];
    int counter = 0;

    while(scanf("%d", &vector[counter]) != EOF) {
        counter++;
    }


    for(int i = 0; i < counter; i++) {
        for(int j = i + 1; j < counter; j++) {
            CMPEXCH(vector[i], vector[j]);
        } 
    }

    for(int i = 0; i < counter; i++) {
        printf("%d", vector[i]);
    }

    return 0;
}

// int main() {
//     int vector[1000];
//     int counter = 0;

//     while(scanf("%d", &vector[counter]) != EOF) {
//         counter++;
//     }


//     for(int i = 0; i < counter; i++) {
//         for(int j = i + 1; j < counter; j++) {
//             if(vector[i] > vector[j]) {
//                 int aux = vector[j];
//                 vector[j] = vector[i];
//                 vector[i] = aux;
//             }
//         } 
//     }

//     for(int i = 0; i < counter; i++) {
//         printf("%d", vector[i]);
//     }

//     return 0;
// }