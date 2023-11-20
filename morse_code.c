#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void textToMorse(const char *text);
void morseToText(const char *morse);
char morseToChar(const char *morse); // Declaration added

// Function to convert a single character to Morse code
void charToMorse(char ch) {
    switch (toupper(ch)) {
        case 'A': printf(".- "); break;
        case 'B': printf("-... "); break;
        case 'C': printf("-.-. "); break;
        case 'D': printf("-.. "); break;
        case 'E': printf(". "); break;
        case 'F': printf("..-. "); break;
        case 'G': printf("--. "); break;
        case 'H': printf(".... "); break;
        case 'I': printf(".. "); break;
        case 'J': printf(".--- "); break;
        case 'K': printf("-.- "); break;
        case 'L': printf(".-.. "); break;
        case 'M': printf("-- "); break;
        case 'N': printf("-. "); break;
        case 'O': printf("--- "); break;
        case 'P': printf(".--. "); break;
        case 'Q': printf("--.- "); break;
        case 'R': printf(".-. "); break;
        case 'S': printf("... "); break;
        case 'T': printf("- "); break;
        case 'U': printf("..- "); break;
        case 'V': printf("...- "); break;
        case 'W': printf(".-- "); break;
        case 'X': printf("-..- "); break;
        case 'Y': printf("-.-- "); break;
        case 'Z': printf("--.. "); break;
        case '0': printf("----- "); break;
        case '1': printf(".---- "); break;
        case '2': printf("..--- "); break;
        case '3': printf("...-- "); break;
        case '4': printf("....- "); break;
        case '5': printf("..... "); break;
        case '6': printf("-.... "); break;
        case '7': printf("--... "); break;
        case '8': printf("---.. "); break;
        case '9': printf("----. "); break;
        case ' ': printf(" "); break; // space between words
        default: printf(" "); // ignore unsupported characters
    }
}

// Function to convert a Morse code character to text
char morseToChar(const char *morse) {
    if (strcmp(morse, ".-") == 0) return 'A';
    if (strcmp(morse, "-...") == 0) return 'B';
    if (strcmp(morse, "-.-.") == 0) return 'C';
    if (strcmp(morse, "-..") == 0) return 'D';
    if (strcmp(morse, ".") == 0) return 'E';
    if (strcmp(morse, "..-.") == 0) return 'F';
    if (strcmp(morse, "--.") == 0) return 'G';
    if (strcmp(morse, "....") == 0) return 'H';
    if (strcmp(morse, "..") == 0) return 'I';
    if (strcmp(morse, ".---") == 0) return 'J';
    if (strcmp(morse, "-.-") == 0) return 'K';
    if (strcmp(morse, ".-..") == 0) return 'L';
    if (strcmp(morse, "--") == 0) return 'M';
    if (strcmp(morse, "-.") == 0) return 'N';
    if (strcmp(morse, "---") == 0) return 'O';
    if (strcmp(morse, ".--.") == 0) return 'P';
    if (strcmp(morse, "--.-") == 0) return 'Q';
    if (strcmp(morse, ".-.") == 0) return 'R';
    if (strcmp(morse, "...") == 0) return 'S';
    if (strcmp(morse, "-") == 0) return 'T';
    if (strcmp(morse, "..-") == 0) return 'U';
    if (strcmp(morse, "...-") == 0) return 'V';
    if (strcmp(morse, ".--") == 0) return 'W';
    if (strcmp(morse, "-..-") == 0) return 'X';
    if (strcmp(morse, "-.--") == 0) return 'Y';
    if (strcmp(morse, "--..") == 0) return 'Z';
    if (strcmp(morse, "-----") == 0) return '0';
    if (strcmp(morse, ".----") == 0) return '1';
    if (strcmp(morse, "..---") == 0) return '2';
    if (strcmp(morse, "...--") == 0) return '3';
    if (strcmp(morse, "....-") == 0) return '4';
    if (strcmp(morse, ".....") == 0) return '5';
    if (strcmp(morse, "-....") == 0) return '6';
    if (strcmp(morse, "--...") == 0) return '7';
    if (strcmp(morse, "---..") == 0) return '8';
    if (strcmp(morse, "----.") == 0) return '9';
    return ' '; // space between words
}

// Function to convert a string to Morse code
void textToMorse(const char *text) {
    int length = strlen(text);
    for (int i = 0; i < length; i++) {
        charToMorse(text[i]);
    }
}

// Function to convert a Morse code string to text
void morseToText(const char *morseCode) {
    char *token = strtok(morseCode, " ");
    while (token != NULL) {
        if (strcmp(token, "") != 0) {
            printf("%c", morseToChar(token));
        }
        token = strtok(NULL, " ");
    }
}

int main() {
    char input[100];

    printf("Choose an option:\n");
    printf("Type 1 to convert Text to Morse code\n");
    printf("Type 2 to convert Morse code to Text\n");
    printf("Type 3 to Exit\n");

    int option;
    scanf("%d", &option);

    getchar(); // Consume the newline character left in the buffer

    switch (option) {
        case 1:
            printf("Enter text to convert to Morse code: ");
            fgets(input, sizeof(input), stdin);
            printf("Morse code: ");
            textToMorse(input);
            break;
        case 2:
            printf("Enter Morse code to convert to text: ");
            fgets(input, sizeof(input), stdin);
            printf("Text: ");
            morseToText(input);
            break;
        default:
            printf("Invalid option\n");
            return 1;
    }

    return 0;
}