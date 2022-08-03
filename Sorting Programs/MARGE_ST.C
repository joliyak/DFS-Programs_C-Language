#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

void Merge(char* arr[],int low,int mid,int high)
{
	int j,k;
    int nL= mid-low+1;
    int nR= high-mid;
    char** L=malloc(sizeof(char *)*nL);
    char** R=malloc(sizeof(char *)*nR);
    int i;
    for(i=0;i<nL;i++)
    {
	L[i]=malloc(sizeof(arr[low+i]));
	strcpy(L[i],arr[low+i]);
    }
    for(i=0;i<nR;i++)
    {
	R[i]=malloc(sizeof(arr[mid+i+1]));
	strcpy(R[i],arr[mid+i+1]);
    }
    j=0;
    i=0;
    k=low;
    while(i<nL&&j<nR)
    {
	if(strcmp(L[i],R[j])<0)strcpy(arr[k++],L[i++]);
	else strcpy(arr[k++],R[j++]);
    }
    while(i<nL)strcpy(arr[k++],L[i++]);
    while(j<nR)strcpy(arr[k++],R[j++]);

}
void MergeSort(char* arr[],int low,int high)
{
    if(low<high)
    {
	int mid=(low+high)/2;
	MergeSort(arr,low,mid);
	MergeSort(arr,mid+1,high);
	Merge(arr,low,mid,high);
    }
}
void print(char* arr[],int x)
{
	int i;
	 printf("\nThe Sorted String is\n");
    for(i=0;i<x;i++)
    {
	printf("%s \n",arr[i]);
    }
}
int main()
{
    int i,size;
    char** arr= malloc(sizeof(char *)* size);
    clrscr();
    printf("\nHow many String ? \n--> ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
	arr[i]=malloc(sizeof(char)*MAX);
	printf("\nEnter String -> ");
	scanf("%s",arr[i]);
    }
    MergeSort(arr,0,size-1);
    print(arr,size);
    getch();
    return 0;
}