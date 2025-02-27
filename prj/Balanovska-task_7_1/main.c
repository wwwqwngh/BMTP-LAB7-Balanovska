#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#define MAX_LEN 100

int main() {
    char word[MAX_LEN];            // Input line
    int ckoka_pa = 0, ckoka_zaglavnih = 0, dlina = 0;
    SetConsoleOutputCP(866);  // Устанавливаем кодировку UTF-8 для консоли

    printf("Enter the word (end with #): ");
    scanf("%99s", word);           // Reading a line without spaces

    int i = 0;                     // Delete #
    while (word[i] != '#' && word[i] != '\0') {
        i++;
    }
    word[i] = '\0';                 // Trimming #
    dlina = strlen(word);

    for (i = 0; i < dlina; i++) {   // How many "pa" and capital letters
        if (i < dlina - 1 && word[i] == 'p' && word[i + 1] == 'a') {
            ckoka_pa++;
        }
        if (isupper(word[i])) {
            ckoka_zaglavnih++;
        }
    }
    if (ckoka_pa > 0) {             //result
        printf("Number of syllables 'pa': %d\n", ckoka_pa);
    } else {
        printf("Word length: %d\n", dlina);
        printf("Number of title letters: %d\n", ckoka_zaglavnih);
    }
    return 0;
}
