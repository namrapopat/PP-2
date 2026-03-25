#include <stdio.h>
#include <conio.h>   // for Turbo C

int main() {
    char str[100];
    int i, len = 0;

    clrscr();   // Turbo C only

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    printf("Length of string (without strlen): %d\n", len);

    getch();    // Turbo C only
    return 0;
}
