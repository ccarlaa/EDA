#include <stdio.h>

void rewrite(char *word) {
    if(*word == '\0') {
        return; 
    }

    if(*word != 'x') {
        printf("%c", *word);
        rewrite(word + 1);
    }
    else {
        rewrite(word + 1);
        printf("%c", *word);
    }

}

void main() {
    char word[101];
    scanf("%s", word);
    rewrite(word);
}