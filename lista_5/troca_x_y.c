#include <stdio.h>

char* change(char *word, int position) {
    if(word[position] == '\0') {
        return word;
    }

    if(word[position] == 'x') {
        word[position] = 'y';
    }

    change(word, position + 1);
}

int main() {
    char word[201];
    int position = 0;

    scanf("%s", word);

    char *answer = change(word, position);
    printf("%s", answer);
}