//find out area of circle using pointer and function
#include <stdio.h>
#define PI 3.14159

// Function to calculate area of circle using pointer
void findArea(float *radius, float *area) {
    *area = PI * (*radius) * (*radius);
}

int main() {
    float r, a;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    // Call function with addresses
    findArea(&r, &a);

    printf("Area of circle with radius %.2f = %.2f\n", r, a);

    return 0;
}
