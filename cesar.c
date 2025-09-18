
#include <stdio.h>
#include <ctype.h>

// I put un boolean value in order to see if we want to cypher or decypher the word in parameters
// ou au contraire si on veut remettre le code à son état d'origine.
void cesar(char str[], int shift, bool isHashedYet) {
    int i = 0;

    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }

    i = 0;

    // We read the string until the end of the word
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // In C language one caracter is always connected to a number (example : A = 65, Z = 90)
            // we substrack the value of each caracter by 65 in order to obtain a new defined numeric value
            int c = str[i] - 'A';
            // Selon le booléen "isHashedYet" on décale
            // vers la fin ou le début de l'alphabet.
            // Depending on the boolean value "isHashedYet" we shift toward or backward through the alaphabet.
            if (!isHashedYet) {
                c += shift;
            } else {
                c -= shift;
            }
            // We need to get back to the beginning of the alphabet is higher than 25
            c = (c % 26 + 26) % 26;
            // We give to the caracter the value resulting from the c algorythm
            str[i] = c + 'A';
        }
        i++;
    }
    // Display of the final ciphered / deciphered result
    printf("%s\n", str);
}