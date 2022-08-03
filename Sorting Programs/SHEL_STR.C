#include<stdio.h>
#include<conio.h>
#include<string.h>
#define n 3

void main()
{
	char jk[11][11],temp[11];
	int i,j,k;
	clrscr();
	printf("Enter %d String to Sort\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%s",jk[i]);
	}
	for(i=n/2;i>0;i=i/2)
	{
		for(j=i;j<n;j++)
		{
			for(k=j-i;k>=0;k=k-i)
			{
				if(strcmp(jk[k+i],jk[k])>=0)
				{
					break;
				}
				else
				{
					strcpy(temp,jk[k]);
					strcpy(jk[k],jk[k+i]);
					strcpy(jk[k+i],temp);
				}
			}
		}
	}
	printf("\nSorted String ");
	for(i=0;i<n;i++)
	{
		printf("\n%s ",jk[i]);
	}
	getch();
}