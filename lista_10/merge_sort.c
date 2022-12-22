#include <stdio.h>
void merge_sort(int *vector, int start, int end) {
    int middle = 0;
    int i, j, k, aux[end + 1];


    if(start < end) {
        middle = (start + end) / 2;
        merge_sort(vector, start, middle);
        merge_sort(vector, middle + 1, end);

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
    }
}

void print_vector(int *vector, int counter) {
    for(int i = 0; i < counter; i++) {
        printf("%d ", vector[i]);
    }
}

int main() {
    int vector[100000];
    int counter = 0;

    while(scanf("%d", &vector[counter]) != EOF) {
        counter++;
    }

    merge_sort(vector, 0, counter - 1);
    print_vector(vector, counter);

    return 0;
}