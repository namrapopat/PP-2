//Find out maximum and minimum number using pointer to function.
#include <stdio.h>

// Function to find maximum and minimum using pointers
void findMaxMin(int *x, int *y, int *max, int *min) {
    if (*x > *y) {
        *max = *x;
        *min = *y;
    } else {
        *max = *y;
        *min = *x;
    }
}

int main() {
    int a, b, maximum, minimum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Call function with addresses
    findMaxMin(&a, &b, &maximum, &minimum);

    printf("Between %d and %d:\n", a, b);
    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);

    return 0;
}
