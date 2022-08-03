#include<stdio.h>
#include<conio.h>
#include<string.h>
#define n 3
void main()
{
	char arr[7],temp;
	int i,j,k;
	clrscr();
	printf("\nEnter %d Charector to Sort \n",n);
	for(i=0;i<=n;i++)
	{
		scanf("%c",&arr[i]);
	}
	arr[i]=NULL;
	for(i=n/2;i>0;i=i/2)
	{
		for(j=i;j<=n;j++)
		{
			for(k=j-i;k>=0;k=k-i)
			{
				if(arr[k+i]>=arr[k])
				{
					break;
				}
				else
				{
					temp=arr[k];
					arr[k]=arr[k+i];
					arr[k+i]=temp;
				}
			}
		}
	}
	printf("\nSorted String ");
	for(i=0;i<=n;i++)
	{
		printf("\n%c",arr[i]);
	}
	getch();
}