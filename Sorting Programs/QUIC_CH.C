#include<stdio.h>
#include<conio.h>
int partition(char array[],int low,int high)
{
	int pivot=array[high];
	int i=(low-1);
	int j,t;
	for(j=low;j<high;j++)
	{
		if(array[j]<=pivot)
		{
			i++;
			t=array[i];
			array[i]=array[j];
			array[j]=t;

		}
	}
	t=array[i+1];
	array[i+1]=array[high];
	array[high]=t;
	return (i+1);
}
void quickSort(char array[], int low, int high)
{
	int pi;
  if (low < high) {
    pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}
void printArray(char array[], int size)
{
  int i;
  for (i = 0; i < size; ++i) {
    printf("%c  ", array[i]);
  }
  printf("\n");
}
void main()
{

  char data[] = {'k','a','m','l','e','s','h'};

  int n = sizeof(data) / sizeof(data[0]);
  clrscr();
  printf("Unsorted Array\n");
  printArray(data, n);

  quickSort(data, 0, n - 1);

  printf("Sorted array in Ascending order -> \n");
  printArray(data, n);
  getch();
}