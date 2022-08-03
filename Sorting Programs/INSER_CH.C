#include<stdio.h>
#include<conio.h>
#define n 5

void main()
{
	char jk[11],temp;
	int i,j;
	clrscr();
	printf("\nEnter %d Charecter to Sort\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%c",&temp);
		j=i-1;
		while(temp<jk[j]&&j>=0)
		{
			jk[j+1]=jk[j];
			j--;
		}
		jk[j+1]=temp;
	}
	printf("\nSorted ");
	for(i=0;i<n;i++)
	{
		printf("\n%c",jk[i]);
	}
	getch();
}