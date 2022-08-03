#include<stdio.h>
#include<conio.h>
#include<string.h>
#define n 3

void main()
{
	int i,j;
	char temp,a[10];
	clrscr();
	printf("\nEnter %d Charecter to Sort\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nSorted");
	for(i=0;i<n;i++)
	{
		printf("\n%s",a[i]);
	}
	getch();
}