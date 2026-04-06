//Swap two variables using pointer and function.
#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *x, int *y) {
    int temp;
    temp = *x;   // store value of x
    *x = *y;     // assign value of y to x
    *y = temp;   // assign stored value to y
}
int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Call swap function
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
