#include<stdio.h>
#include<conio.h>
#include<string.h>
#define n 3

void main()
{
	int i,j;
	char t[11],a[11][11];
	clrscr();
	printf("\nEnter %d string to Sort \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
	}
	printf("\nSorted string \n");
	for(i=0;i<n;i++)
	{
		printf("%s \n",a[i]);
	}
	getch();
}
