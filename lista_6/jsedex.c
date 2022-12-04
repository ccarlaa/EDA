#include <stdio.h>

void main() {
    int diameter, w, h, t;
    scanf("%d %d %d %d", &diameter, &w, &h, &t);

    if(diameter <= w && diameter <= h && diameter <= t) {
        printf("S");
    }
    else {
        printf("N");
    }
}