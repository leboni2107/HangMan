#include <stdio.h>
#include <string.h>

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
    char word[128][256]; // 256 Bytes per string, 128 strings = 32768 Bytes
    char line[1024];

    FILE *inputFile = fopen("../words.txt", "r");

    if (inputFile == NULL) {
        printf("Error: Could not open words.txt\n");
    }
    else {
        int wordCount = 0;
        while (fgets(line, 1024, inputFile) != NULL && wordCount < 128) {
            int j = 0;
            int charIndex = 0;

            while (line[j] != '\0' && wordCount < 128) {
                while (line[j] == ' ' || line[j] == ',' || line[j] == '\n') {
                    j++;
                }

                charIndex = 0;
                while (line[j] != ' ' && line[j] != ',' && line[j] != '\n' && line[j] != '\0' && charIndex < 255) {
                    word[wordCount][charIndex] = line[j];
                    j++;
                    charIndex++;
                }

                if (charIndex > 0) {
                    word[wordCount][charIndex] = '\0'; // Null terminate
                    wordCount++;
                }
            }
        }

        printf("Words: ");
        for (int i = 0; i < wordCount; i++) {
            printf("%s ", word[i]);
        }

    }
    fclose(inputFile);

    return 0;
}