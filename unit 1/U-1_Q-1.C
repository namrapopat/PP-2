#include<stdio.h>
#include<conio.h>
void main()
{
	int i,arr[5];
	clrscr();
	printf("enter a array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	getch();
}