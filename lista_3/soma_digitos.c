#include <stdio.h>

 int sum(char *num,  int sum_num) {
    if(num[0] == '\0') {
        return sum_num;
    }

    long int new_num = (num[0] - '0') % 10;
    sum_num += new_num;

    sum(num + 1, sum_num);
}

void main() {
    char num[100];
    scanf("%s", num);

    int result = sum(num, 0);
    
    printf("%d\n", result);
}