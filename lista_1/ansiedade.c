#include <stdio.h>
#include <string.h> 

int main() {
    char yes[] = "sim";
    char entry[4];
    int cited = 0;
    int yes_frequency = 0;
    int ret = 0;
    int comparation = -1;
    int frequency = 0;
    int counter = 0;

    while(1) {
        counter++;

        ret = scanf("%s", entry);

        if(ret != 1) {
            break;
        }

        comparation = strcmp(entry, yes);

        if(comparation == 0) {
            yes_frequency++;
        }

        if(counter == 10) {
            if(yes_frequency >= 2) {
                frequency++;
            }
            
            yes_frequency = 0;
            counter = 0;
        }

    }

    printf("%d\n", frequency);
}