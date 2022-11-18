#include <stdio.h>

int main() {
    int number = 0;

    while(scanf("%x", &number) != EOF) {
        char *message = &number;

        for(int i = 0; i < 4; i++) {
            if(message[i] == 0) {
                printf("\n");
                break;
            }

            printf("%c", (char)message[i]);
        }
    }
}