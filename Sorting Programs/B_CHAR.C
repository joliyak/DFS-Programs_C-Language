#include<stdio.h>
#include<conio.h>
#include<string.h>
#define n 5

void main()
{
	int i,j;
	char jk[10],temp;
	clrscr();
	printf("\nEnter %d charecter\n",n);
	for(i=0;i<n;i++)
	{
		scanf(" %c \n",&jk[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(jk[j]>jk[j+1])
			{
				temp=jk[j];
				jk[j]=jk[j+1];
				jk[j+1]=temp;
			}
		}
	}
	printf("\nSorted string \n");
	for(i=0;i<n;i++)
	{
		printf("%c\n",jk[i]);
	}
	getch();

}
