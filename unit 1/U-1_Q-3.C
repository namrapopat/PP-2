#include<stdio.h>
#include<conio.h>
void main()
{

		int i,n,a[50],max,min;
		clrscr();
		printf("enter the number of elemenmts :");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("enter element%d:",i+1);
			scanf("%d",&a[i]);
		}
		max=min=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]>max)
			max=a[i];
			if(a[i]<min)
			min=a[i];
		}
		printf("\n maximum=%d",max);
		printf("\n minimum=%d",min);
		getch();
}
