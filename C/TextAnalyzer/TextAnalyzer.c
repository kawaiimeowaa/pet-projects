#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int option;
    int letter = 0;
    int space = 0;
    int word = 0;
    int in_word = 0;
    char text[101];

    printf("TextAnalyzer v1.1\n");
    printf("1. reference\n");
    printf("2. Text analysis\n");
    do {
        printf("Enter option(1-2):");
        scanf("%d",&option);

        switch(option) {
            case 1:
                printf("The first version of TextAnalyzer can only count letters, words and spaces :)");
                break;

            case 2:
                printf("Enter your text to analyze(You can Enter only 100 symbols): ");
                getchar();
                fgets(text, 101, stdin);

                for (int i = 0; i < strlen(text); i++) {
                    if (text[i] == '\n') {
                        text[i] = '\0';
                    }
                    else if (isspace(text[i])) {
                        ++space;
                    }
                    else if (isalpha(text[i])) {
                        ++letter;
                    }
                }
                for (int i = 0; i < strlen(text); i++) {
                    if (isspace(text[i])) {
                        in_word = 0;
                    }
                    else if (isalpha(text[i]) && in_word == 0) {
                        word++;
                        in_word = 1;
                    }
                }
                printf("Analysis result:\n");
                printf("Letters: %d\n", letter);
                printf("Spaces: %d\n", space);
                printf("Words: %d\n", word);
                break;

            default:
                    printf("You can Enter only 1 or 2\n");
                break;
        }
    } while (option != 1 && option != 2);
}