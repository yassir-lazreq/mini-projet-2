#include <stdio.h>

int main() {
    int length = 4;
    char word[4] = {'g', 'a', 'm', 'e'};
    char hidden[4] = {'_', '_', '_', '_'};
    for (int i = 0; i < length; i++) {
        printf("%c ", hidden[i]);
    }
    printf("\nIt's something you like\n");
    printf("Veuillez entrer votre caractere:\n");
    const int max_attempts = 5;
    int attempts = 0;
    int found = 0;

    while (attempts < max_attempts && found < length) {
        char lettre;
        scanf(" %c", &lettre);

        int correct = 0;
        for (int j = 0; j < length; j++) {
            if (lettre == word[j] && hidden[j] == '_') {
                hidden[j] = lettre;
                found++;
                correct = 1;
            }
        }

        for (int k = 0; k < length; k++) {
            printf("%c ", hidden[k]);
        }
        printf("\n");

        if (correct) {
            printf("C'est juste!\n");
        } else {
            attempts++;
            printf("C'est faux, il vous reste %d tentatives\n", max_attempts - attempts);
        }

        if (found == length) {
            printf("Vous avez gagne!\n");
            return 0;
        }
        if (attempts < max_attempts)
            printf("Veuillez entrer votre caractere:\n");
    }

    printf("Vous avez perdu!\n");
    return 0;
}