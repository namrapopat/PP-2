#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str[100];
    int a, b, c = 0;  

    clrscr();

    printf("Enter a string: ");
    gets(str);

    b = strlen(str);

    for (a = 0; a < b / 2; a++) {
        if (str[a] != str[b - a - 1]) {
            c = 1;
            break;
        }
    }

    if (c == 0)
        printf("The string is a PALINDROME.\n");
    else
        printf("The string is NOT a palindrome.\n");

    getch();
    return 0;
}
