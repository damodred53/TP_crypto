#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// The prototypes thare are in others files (there is cesar.c and vigenere.c)
void cesar(char text[], int shift, bool decrypt);
void vigenere(char text[], char key[], int encrypt);
void matrice();



int main() {
    char text1[] = "HELLO WORLD";
    char key[] = "KEY";
    char text2[] = "HELLO aat";


    vigenere(text1, key, 1);
    printf("Vigenère chiffré : %s\n", text1);
    vigenere(text1, key, 0);
    printf("Vigenère déchiffré : %s\n", text1);


    cesar(text2, 3, false);
    printf("César chiffré : %s\n", text2);
    cesar(text2, 3, true);
    printf("César déchiffré : %s\n", text2);

    matrice();
    printf("\n");

    return 0;
}
