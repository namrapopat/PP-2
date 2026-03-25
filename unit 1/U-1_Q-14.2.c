#include <stdio.h>
#include <conio.h>

int main() {
    char str[100];
    int i, len = 0;

    clrscr();

    printf("Enter a string: ");
    gets(str);

    // manually count length
    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    printf("String in reverse order (without strlen): ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    getch();
    return 0;
}
