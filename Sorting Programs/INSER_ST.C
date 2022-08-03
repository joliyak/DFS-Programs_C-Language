#include<stdio.h>
#include<conio.h>
#define n 3

void main()
{
	char jk[11][11],temp[11];
	int i,j;
	clrscr();
	printf("\nEnter %d String to sort\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%s",jk[i]);
	}
	for(i=0;i<=n;i++)
	{
		strcpy(temp,jk[i]);
		j=i-1;
		while(strcmp(temp,jk[j])<0&&j>=0)
		{
			strcpy(jk[j+1],jk[j]);
			j--;
		}
		strcpy(jk[j+1],temp);
	}
	printf("\nSorted string ");
	for(i=0;i<n;i++)
	{
		printf("\n%s",jk[i]);
	}
	getch();
}