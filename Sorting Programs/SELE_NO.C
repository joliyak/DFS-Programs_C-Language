#include<stdio.h>
#include<conio.h>
#include<string.h>
#define n 3

void main()
{
	int i,j;
	int temp,a[11];
	clrscr();
	printf("\nEnter %d Number to Sort\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nSorted \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}