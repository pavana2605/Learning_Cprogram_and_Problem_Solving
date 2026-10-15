#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char *s, char *t) {
    int freq[26] = {0};

    if (strlen(s) != strlen(t)) {
        return false;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';
        freq[index]++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        int index = t[i] - 'a';
        freq[index]--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)
            return false;
    }

    return true;
}

int main() {
    char s[] = "listen";
    char t[] = "silent";

    if (isAnagram(s, t))
        printf("Anagram\n");
    else
        printf("Not an Anagram\n");

    return 0;
}

//anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.