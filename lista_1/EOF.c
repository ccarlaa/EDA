#include <stdio.h>

int main() {
    int ret = 1;
    int quantity = 0;
    int value = 0;

    while(ret == 1) {
        ret = scanf("%d", &value);

        if(ret == 1) {
            quantity++;    
        }
        else {
            printf("%d", quantity);
            break;
        }
    }
}