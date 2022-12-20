#include <stdio.h>
#include <stdlib.h>

void main() {
    int num_kiks = 0;
    scanf("%d", &num_kiks);

    char *second_team = malloc((num_kiks) * sizeof(char));
    char *first_team = malloc((num_kiks) * sizeof(char));
    int counter_one = 0;
    int counter_two = 0;
    int times = 0;
    int t1 = num_kiks;
    int t2 = num_kiks;

    scanf("%s", first_team);
    scanf("%s", second_team);

    for(int i = 0; i < num_kiks; i++) {
        times++;

        if(first_team[i] == 'o') {
            counter_one++;
        }
        t1--;
        
        if(counter_two + t2 < counter_one || counter_one + t1 < counter_two) {
            break;
        }

        times++;

        if(second_team[i] == 'o') {
            counter_two++;
        }
        t2--;

        if(counter_two + t2 < counter_one || counter_one + t1 < counter_two) {
            break;
        }
    }

    if(counter_two == counter_one) {
        printf("Empate\n");
    }
    else {
        printf("%d\n", times);
    }

}