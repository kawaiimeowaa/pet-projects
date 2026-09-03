#include <stdio.h>
#include <windows.h>

int main() {
    int level;

    SetConsoleOutputCP(CP_UTF8);

    printf("Silly Robot Game  (≧◡≦) \n\n");
    printf("Choose level(1-5): ");
    scanf("%d", &level);

    switch (level)
    {
        case 1:
            char map[5][21] = {
            "####################",
            "#..................#",
            "#....R.............#",
            "#..............*...#",
            "####################"
        };
            break;

        case 2:
            // Level 2
            break;

        case 3:
            // Level 3
            break;

        case 4:
            // Level 4
            break;

        case 5:
            // Level 5
            break;

        default:
            printf("Invalid level!\n");
            break;
    }
}