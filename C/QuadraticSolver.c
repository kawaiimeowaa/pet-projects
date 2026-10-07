#include <stdio.h>
#include <math.h>

float discriminant(float a, float b, float c);
void calc(float a, float b, float D);

int main() {
    float a;
    float b;
    float c;
    float D;
    float x1;
    float x2;
    printf("Quaratic equatiocn solver\n\n");

    printf("Enter Leading coefficient: ");
    scanf("%f", &a);
    printf("Enter Linear coefficient: ");
    scanf("%f", &b);
    printf("Enter const term: ");
    scanf("%f", &c);

    D = discriminant(a, b, c);
    calc(a, b, D);

}

float discriminant(float a, float b, float c) {
     return (b * b) - (4 * a * c);
}

void calc(float a, float b, float D) {
    if (D > 0) {
        float x1 = (-b + sqrt(D)) / (2 * a);
        float x2 = (-b - sqrt(D)) / (2 * a);
        printf("%f\n", x1);
        printf("%f\n", x2);

    } else if (D == 0) {
        float x1 = -b / (2 * a);
        printf("%f\n", x1);
    }
}