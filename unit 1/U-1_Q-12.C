#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50];
	int i;
	clrscr();
	printf("enter name :");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	printf("%c\n",str[i]);
	printf("\n%s",str);
	getch();
}
