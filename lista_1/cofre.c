#include <stdio.h>

int main() {
    int num_of_operations_executed = 0;

    while(1) {
        int num_of_operations = 0;
        num_of_operations_executed++;

        scanf("%i", &num_of_operations);

        if(num_of_operations == 0) {
            break;
        }

        int joao = 0;
        int zezinho = 0;
        int value = 0;
        int num_of_deposits = num_of_operations * 2;
        int differences[num_of_operations];
        int num_of_differences = 0;
        int difference = 0;

        for(int i = 0; i < num_of_deposits; i++) {
            scanf("%i", &value);

            if(i%2 == 0) {
                joao += value;
            }
            else {
                zezinho += value;

                difference += (joao - zezinho);
                differences[num_of_differences] = difference;

                num_of_differences++;
                joao = 0;
                zezinho = 0;
            }

        }

        for(int i = 0; i < num_of_operations; i++) {
            if(i == 0) {
                printf("Teste %d\n", num_of_operations_executed);
            }

            printf("%d\n", differences[i]);
        }

        printf("\n");
    }
}