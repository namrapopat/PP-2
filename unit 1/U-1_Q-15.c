#include <stdio.h>
#include <conio.h>   // Turbo C specific
#include <ctype.h>

int main() {
    char str[200];
    int i, spaces = 0, vowels = 0;

    clrscr();  // clear screen in Turbo C

    printf("Enter a string: ");
    gets(str);  // Turbo C uses gets()

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        if (ch == ' ') {
            spaces++;
        }
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of vowels: %d\n", vowels);

    getch();  // wait for key press before closing
    return 0;
}
