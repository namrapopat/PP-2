#include <stdio.h>
#include <conio.h>

void main() {
    int n, i;
    int arr1[100], arr2[100];  // assuming max 100 elements

    clrscr();  // clear screen (Turbo C specific)

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copy elements from arr1 to arr2
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("\nElements copied into second array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    getch();  // wait for key press (Turbo C specific)
}
