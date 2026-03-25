#include <stdio.h>
#include <string.h>
#include <conio.h>   // for Turbo C

int main() {
    char str[100];
    int len;

    clrscr();   // Turbo C only

    printf("Enter a string: ");
    gets(str);  // Turbo C uses gets()

    len = strlen(str);   // string function

    printf("Length of string (using strlen): %d\n", len);

    getch();    // Turbo C only
    return 0;
}
