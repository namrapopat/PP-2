#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str1[100], str2[100];
    int a; 

    clrscr();

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    a = strcmp(str1, str2);

    if (a == 0)
        printf("Strings are SAME.\n");
    else
        printf("Strings are NOT SAME.\n");

    getch();
    return 0;
}
