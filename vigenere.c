#include <stdio.h>
#include <ctype.h>
#include <string.h>


void vigenere(char text[], char key[], int encrypt) {
    int i, j;
    int text_len = strlen(text);
    int key_len = strlen(key);

    for (i = 0, j = 0; i < text_len; i++) {
        if (isalpha(text[i])) {
            char base = isupper(text[i]) ? 'A' : 'a';
            char k = toupper(key[j % key_len]) - 'A';
            if (!encrypt) k = -k;

            text[i] = (text[i] - base + k + 26) % 26 + base;
            j++;
        }
    }
}


