#include <stdio.h>
#include <stdlib.h>

void merge(int *vector, int start, int end, int middle) {
    int i, j, k, aux[end + 1];


    // if(start < end) {
        // merge_sort(vector, start, middle);
        // merge_sort(vector, middle + 1, end);

        //merge
        i = start;
        j = middle + 1;
        k = 0;

        while(i <= middle && j <= end) {
            if(vector[i] <= vector[j]) {
                aux[k] = vector[i];
                i++;
            } 
            else {
                aux[k] = vector[j];
                j++;
            }
            k++;
        }

        while(i <= middle) {
            aux[k] = vector[i];
            i++;
            k++;
        }

        while(j <= end) {
            aux[k] =vector[j];
            j++;
            k++;
        }

        int aux_counter = 0;
        for(int i = start; i < end + 1; i++) {
            vector[i] = aux[aux_counter];
            aux_counter++;
        }
    // }
}

int main() {
    int lenght = 0;
    int new_length = 0;
    int vector[16 * (int)1e5 + (int)6.66];

    for(int j = 0; j < 8; j++) {

        scanf("%d", &lenght);

        if(lenght == 0) {
            continue;
        }

        for(int i = 0; i < lenght; i++) {
            scanf("%d", &vector[i + new_length]);
        }

        merge(vector, 0, new_length + lenght - 1, new_length - 1);
        new_length += lenght;
    }

    for(int i = 0; i < new_length; i++) {
        printf("%d ", vector[i]);
    }
    
    printf("\n");
    return 0;
}