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

void binary_search(int *vector, int left, int right, int number) {
    if(right >= left) {
        int middle = (left + (right - left))/ 2;
        if(vector[middle] == number) {
            printf("%d\n", middle);
            return;
        }
        if(vector[middle] > number) {
            binary_search(vector, left, middle - 1, number);
            return;
        }
        else {
            binary_search(vector, middle + 1, right, number);
            return;
        }
    }
    printf("-1\n");
    return;
}


int main() {
    int n = 0;
    int m = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    int *vector = malloc(n * sizeof(int));
    int *verify = malloc(m * sizeof(int));

    for(int i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
    }

    for(int i = 0; i < m; i++) {
        int number = 0;
        scanf("%d", &verify[i]);
    }

    merge_sort(vector, 0, n);

    for(int i = 0; i < m; i++){
        int number = verify[i];
        binary_search(vector, 0, n - 1, number);
    }

    return 0;
}