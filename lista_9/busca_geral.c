#include <stdio.h>
#include <stdlib.h>

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

int binary_search(int *vector, int left, int right, int number) {

    while(left + 1 < right) {
        int middle = (left + right) / 2;

        // printf("left: %d\n", left);
        // printf("right: %d\n", right);
        // printf("middle: %d\n", middle);

        if(number >= vector[middle]) {
            left = middle;
        }
        if(number < vector[middle]) {
            right = middle;
        }
    }
    
    if(vector[left] != number) {
        printf("-1\n");
        return 0;
    }

    return 1;
}


int main() {
    int n = 0;
    int m = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    // printf("n: %d\n", n);
    // printf("m: %d\n", m);

    int *vector = malloc(n * sizeof(int));
    int *vector_copy = malloc(n * sizeof(int));
    int *verify = malloc(m * sizeof(int));

    for(int i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
        vector_copy[i] = vector[i];
    }

    for(int i = 0; i < m; i++) {
        int number = 0;
        scanf("%d", &verify[i]);
    }

    merge_sort(vector, 0, n);

    for(int i = 0; i < m; i++){
        int number = verify[i];
        int right = n - 1;
        int result = binary_search(vector, 0, right, number);

        if(result) {
            for(int j = 0; j < n; j++) {
                if(vector_copy[j] == number) {
                    printf("%d\n", j);
                }
            }
        }
    }

    return 0;
}