#include <stdio.h>

int main() {
    int sum = 0;
    int num_of_nums = 0;
    int num = 0;

    scanf("%i", &num_of_nums);

    for(int i = 1; i <= num_of_nums; i++) {
        scanf("%i", &num);
        sum += num;
    }

    printf("%d\n", sum);
}