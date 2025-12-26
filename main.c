#include <stdio.h>

char* GetHangman(int stage) { // Stage: Value 0-7
    char* response;
    switch (stage) {
        default:
            response = "Invalid Stage";
            break;
        case 1:
            response = "  +---+\n"
                       "  |   |\n"
                       "      |\n"
                       "      |\n"
                       "      |\n"
                       "      |\n";
            break;
        case 2:
            response = "  +---+\n"
                       "  |   |\n"
                       "  O   |\n"
                       "      |\n"
                       "      |\n"
                       "      |\n";
            break;
        case 3:
            response = "  +---+\n"
                       "  |   |\n"
                       "  O   |\n"
                       "  |   |\n"
                       "      |\n"
                       "      |\n";
            break;
        case 4:
            response = "  +---+\n"
                       "  |   |\n"
                       "  O   |\n"
                       " /|   |\n"
                       "      |\n"
                       "      |\n";
            break;
        case 5:
            response = "  +---+\n"
                       "  |   |\n"
                       "  O   |\n"
                       " /|\\  |\n"
                       "      |\n"
                       "      |\n";
            break;
        case 6:
            response = "  +---+\n"
                       "  |   |\n"
                       "  O   |\n"
                       " /|\\  |\n"
                       " /    |\n"
                       "      |\n";
            break;
        case 7:
            response = "  +---+\n"
                       "  |   |\n"
                       "  O   |\n"
                       " /|\\  |\n"
                       " / \\  |\n"
                       "      |\n";
            break;
    }

    return response;
}

int main(void) {
    char word[128][256]; // 256 Bytes per word, 128 words = 32768 Bytes

    FILE *input = fopen("../words.txt", "r");

    if (input == NULL) {
        printf("Error: Could not open words.txt\n");
    }
    else {
        char rawWord[256];
        fgets(rawWord, 256, input);
        printf("%s", rawWord);
    }
    fclose(input);

    return 0;
}