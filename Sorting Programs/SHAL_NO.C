#include<stdio.h>
#include<conio.h>
#define n 3

void main()
{
	int jk[30],temp;
	int i,j,k;
	clrscr();
	printf("\nEnter %d Number to Sort\n",n);
	for(k=0;k<n;k++)
	{
		scanf("%d",&jk[k]);
	}
	for(i=n/2;i>0;i=i/2)
	{
		for(j=i;j<n;j++)
		{
			for(k=j-i;k>=0;k=k-i)
			{
				if(jk[k+i]>=jk[k])
				{
					break;
				}
				else
				{
					temp=jk[k];
					jk[k]=jk[k+i];
					jk[k+i]=temp;
				}
			}
		}
	}
	printf("\nSorted\n");
	for(k=0;k<n;k++)
	{
		printf("%d\n",jk[k]);
	}
	getch();

}