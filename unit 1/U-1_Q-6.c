#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char str[100];

    clrscr();

    printf("Enter a string: ");
    gets(str);

    strrev(str);

    printf("Reversed string: %s", str);

    getch();
}
