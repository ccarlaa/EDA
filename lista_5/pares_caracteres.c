#include <stdio.h>

int pairs(char *word, int start, int end, int num_pairs) {
    if(word[end] == '\0') {
        return num_pairs;
    }

    if(word[start] == word[end]) {
        num_pairs++;
    }

    pairs(word, start + 1, end + 1, num_pairs);
}

int main() {
    char word[201];
    int start = 0;
    int end = 2;
    int num_pairs = 0;

    scanf("%s", word);

    int answer = pairs(word, start, end, num_pairs);
    printf("%d", answer);
}