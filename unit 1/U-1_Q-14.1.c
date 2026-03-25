#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str[100];
    int i, len;

    clrscr();

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);  // find length using string function

    printf("String in reverse order (using strlen): ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    getch();
    return 0;
}
