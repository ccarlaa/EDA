#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum_int(char number[1001], int soma) {

    if(*number == '\0') {
        return soma;
    }

    int new_number = (number[0] - '0');
    soma += new_number;

    sum_int(number + 1, soma);
}

void main() {
    char number[1001];
    int soma = 0;
    int degree = 1;
    int done = 0;
    
    while(scanf("%s", number)) {
        int answer = 10;
        int degree = 1;

        if (*number == '0'){
            break;
        }

        char result[1001];
        strcpy(result, number);

        while(answer >= 9) {
            answer = sum_int(result, soma);

            if(answer == 9) {
                printf("%s is a multiple of 9 and has 9-degree %d.\n", number, degree);
                break;
            }
            else if(answer < 9){
                printf("%s is not a multiple of 9.\n", number);
                break;
            }
            else {
                sprintf(result, "%d", answer);
                degree++;
            }
        }
    }
}