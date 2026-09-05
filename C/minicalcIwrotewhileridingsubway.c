#include <stdio.h>

int main() {
    float a;
    float b;
    float result;
    char operation;

    printf("Mini  Cacl v0.1 :)\n\n");
    printf("Enter operation(- + / *): ");
    scanf("%c", &operation);
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    switch (operation){
        case '+':
        result = a + b;
        printf("Result: %f", result);
        break;

        case '-':
        result = a - b;
        printf("Result: %f", result);
        break;

        case '*':
        result = a * b;
        printf("Result: %f", result);
        break;

        case '/':
        result = a / b;
        printf("Result: %f", result);
        break;
    }
}
