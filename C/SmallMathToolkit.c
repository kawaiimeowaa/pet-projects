#include <stdio.h>
#include <math.h>

int running = 1;

void min(float numbers[], int count); // parameters
void max(float numbers[], int count);
void square(float square_number);
void cube(int cube_number);
void avg(float numbers[], int count);
void factorial(int number);
void root(float root_number);

int main () {
    while (running == 1) {
        int operation;
        int count;
        float square_number;
        int cube_number;
        int number;
        float root_number;
        float numbers[100];
        printf("MathToolkit v0.1\n\n");

        printf("1. Min\n");
        printf("2. Max\n");
        printf("3. Square\n");
        printf("4. Cube\n");
        printf("5. Average\n");
        printf("6. Factorial\n");
        printf("7. Root\n");
        printf("8. Exit\n");

        printf("Choose operation: ");
        scanf("%d",&operation);

        switch (operation) {
            case 1:
                printf("how many numbers: ");
                scanf("%d",&count);

                for(int i=0;i<count;i++) {
                    scanf("%f",&numbers[i]); // all numbers in numbers have float data type
                }

                min(numbers,count);
                break;
            case 2:
                printf("how many numbers: ");
                scanf("%d",&count);

                for(int i=0;i<count;i++) {
                    scanf("%f",&numbers[i]); // all numbers in numbers have float data type
                }

                max(numbers,count);
                break;
            case 3:
                printf("Enter number: ");
                scanf("%f",&square_number);
                square(square_number);
                break;
            case 4:
                printf("Enter number: ");
                scanf("%d",&cube_number);
                cube(cube_number);
                break;
            case 5:
                printf("How many numbers: ");
                scanf("%d", &count);
                for (int i=0;i<count;i++) {
                scanf("%f", &numbers[i]);
                }
                avg(numbers, count);
                break;
            case 6:
                printf("Enter your number: ");
                scanf("%d", &number);
                factorial(number);
                break;
            case 7:
                printf("Enter your number: ");
                scanf("%f", &root_number);
                root(root_number);
                break;
            case 8:
                running = 0;
                break;
        }
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

void square(float square_number) {
    square_number = square_number * square_number;
    printf("square: %f\n", square_number);
}

void cube(int cube_number) {
    cube_number = cube_number * cube_number * cube_number;
    printf("cube: %d\n", cube_number);
}

void avg(float numbers[], int count) {
    float all_numbers = 0;
    for (int n = 0; n < count; n++) {
        all_numbers = all_numbers + numbers[n];
    }
    float result = all_numbers / count;
    printf("AVG: %f\n", result);
}

void factorial(int number) {
    long long fac = 1;
    for (int i = 1; i <= number;i++) {
        fac = fac * i;
    }
    printf("Factorial: %lld\n", fac);
}

void root(float root_number) {
    if (root_number < 0) {
        printf("Error. number < 0");
    } else {
        printf("Root: %.2f\n", sqrt(root_number));
    }
}