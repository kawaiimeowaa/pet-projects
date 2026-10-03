#include <stdio.h>

void min(float numbers[], int count); // parameters
void max(float numbers[], int count);

int main () {
    int operation;
    int count;
    float numbers[100];
    printf("MathToolkit v0.1\n\n");

    printf("1. Min\n");
    printf("2. Max\n");
    printf("3. Square\n");
    printf("4. Cube\n");
    printf("5. Average\n");
    printf("6. Factorial\n");
    printf("7. Exit");


    printf("Choose operation:\n");
    scanf("%d",&operation);

    printf("how many numbers: \n");
    scanf("%d",&count);

    for(int i=0;i<count;i++) {
        scanf("%f",&numbers[i]); // all numbers in numbers have float data type
    }

    switch (operation) {
        case 1:
            min(numbers,count);
            break;
        case 2:
            max(numbers,count);
            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
    }
}

void min(float numbers[], int count) {
    float min_number = numbers[0];
    int n = 0;
    for (n; n < count; n++) {
        if (numbers[n] < min_number) {
            min_number = numbers[n];
        }
    }
    printf("min: %f\n", min_number);
}

void max(float numbers[], int count) {
    float max_number = numbers[0];
    int p = 0;
    for (p; p < count; p++) {
        if (numbers[p] > max_number) {
            max_number = numbers[p];
        }
    }
    printf("max: %f\n", max_number);
}