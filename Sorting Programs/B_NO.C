#include<stdio.h>
#include<conio.h>
#include<string.h>
#define n 3

void main()
{
	int i,j;
	int a[10],t;
	clrscr();
	printf("\nEnter %d Number to Sort\n",n);
	for(i=0;i<n;i++)
	{
		scanf(" %d \n",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\nSorted string \n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	getch();

}
