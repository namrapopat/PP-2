#include <stdio.h>
#include <conio.h>

void main() {
    int arr[100], n, i;
    int pos = 0, neg = 0, even = 0, odd = 0;

    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] >= 0)
            pos++;
        else
            neg++;
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Positive numbers = %d\n", pos);
    printf("Negative numbers = %d\n", neg);
    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    getch();
}
