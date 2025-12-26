#include <stdio.h>
#include <windows.h>

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
    char word[256][128]; // 256 Bytes per word, 128 words = 32768 Bytes



    return 0;
}