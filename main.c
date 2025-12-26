#include <stdio.h>

char* GetHangman(int stage) {
    /*
     * Stage: Value 0-7
     */
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
        case 2:
            response = "  +---+\n"
                       "  |   |\n"
                       "  O   |"
                       "      |"
                       "      |"
                       "      |";
        case 3:
            response = "  +---+\n"
                       "  |   |"
                       "  O   |"
                       "  |   |"
                       "      |"
                       "      |";
        case 4:
            response = "  +---+\n"
                       "  |   |"
                       "  O   |"
                       " /|   |"
                       "      |"
                       "      |";
        case 5:
            response = "  +---+\n"
                       "  |   |"
                       "  O   |"
                       " /|\\  |"
                       "      |"
                       "      |";
        case 6:
            response = "  +---+\n"
                       "  |   |"
                       "  O   |"
                       " /|\\  |"
                       " /    |"
                       "      |";
        case 7:
            response = "  +---+\n"
                       "  |   |"
                       "  O   |"
                       " /|\\  |"
                       " / \\  |"
                       "      |";

    }
    return response;
}

int main(void) {
    printf(GetHangman(1));

    return 0;
}