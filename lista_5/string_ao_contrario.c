#include <stdio.h>
#include <string.h>


char* reverse(char* word, char* new_word, int position, int new_position) {
    if(position == -1) {
        new_word[new_position] = '\0';
        return new_word;
    }
    
    new_word[new_position] = word[position];
    reverse(word, new_word, position - 1, new_position + 1);
}

int main() {
    char word[500];
    char new_word[500];

    scanf("%s", word);

    int size = strlen(word);
    char *answer = reverse(word, new_word, size - 1, 0);

    printf("%s", answer);
}