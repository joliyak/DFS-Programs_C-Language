#include<stdio.h>
#include<conio.h>
#include<string.h>
#define n 3

void main()
{
	int i,j;
	char temp[10],a[11][11];
	clrscr();
	printf("\nEnter %d string to Sort\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	printf("\nSorted String ");
	for(i=0;i<n;i++)
	{
		printf("\n%s",a[i]);
	}
	getch();
}