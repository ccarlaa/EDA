#include <stdio.h>

int f91(int number) {
    int result;

    if(number > 100) {
        result = number - 10;
        return result;
    }
    else {
        result = f91(f91(number + 11));
        return result;
    }
}

void main() {
    while(1) {
        int number;
        int result;
        scanf("%d", &number);

        if(number == 0) {
            break;
        }

        result = f91(number);
        printf("f91(%d) = %d\n", number, result);
    }
}