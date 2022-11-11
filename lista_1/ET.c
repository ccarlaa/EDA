#include <stdio.h>
#include <string.h> 

int main() {
    char planet[] = "marte";
    char name[] = "Leonardo Cicero Marciano";
    char entry[61];
    int cited = 0;
    int comparation = -1;
    int ret = 0;

    while(1) {
        ret = scanf("%s", entry);

        if(ret != 1) {
            break;
        }

        comparation = strcmp(entry, planet);

        if(comparation == 0) {
            cited = 1;
        }
    }

    if(cited) {
        printf("%s", name);
    }
    else {
        printf("none");
    }
}