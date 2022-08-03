#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>

struct linkd
{
	int data;
	struct linkd *next;
}*start=NULL,*end=NULL,*temp=NULL,*x=NULL;
int se;
int flag=0;
void insertLast()
{
	temp=(struct linkd *)malloc(sizeof(struct linkd));
	printf("\nEnter Data ->");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		end->next=temp;
	}
	end=temp;
	clrscr();
	printf("\n\tSaved ");
}
void insertFirst()
{
	temp=(struct linkd *)malloc(sizeof(struct linkd));
	printf("\nEnter Data ->");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL)
	{
		end=temp;
	}
	else
	{
		temp->next=start;
	}
	start=temp;
	clrscr();
	printf("\n\tSaved ");
}
void deleteLast()
{
	if(start==NULL)
	{
		printf("\nList is Empty");
	}
	else if(end==start)
	{
		printf("\n%d Deleted ",start->data);
		free(end);
		free(start);
		start=NULL;
		end=NULL;
		temp=NULL;
	}
	else
	{
		printf("\n%d Deleted ",end->data);
		for(temp=start;temp->next!=end;temp=temp->next)
		{
			;
		}
		temp->next=NULL;
		free(end);
		end=temp;
	}
}
void deleteFirst()
{
	if(start==NULL)
	{
		printf("\nList is Empty");
	}
	else if(end==start)
	{
		printf("\n%d Deleted ",start->data);
		free(end);
		free(start);
		start=NULL;
		end=NULL;
		temp=NULL;
	}
	else
	{
		printf("\n%d Deleted ",start->data);
		temp=start;
		start=start->next;
		free(temp);
	}
}
void display()
{
	if(start==NULL)
	{
		printf("\nList is Empty");
		return;
	}
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		//printf("%d ",temp->data);
		printf("\n%u [%d] %u", temp,temp->data,temp->next);
	}
}
void search()
{
	if(start==NULL)
	{
		printf("\nList is Empty");
		return;
	}
	printf("Enter Data to Search -->");
	scanf("%d",&se);
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		flag=0;
		if(se==temp->data)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("\n\t\tFound");
	else
		printf("Not found");
}
void update()
{
	search();
	if(flag==1)
	{
		printf("\nEnter Data ->");
		scanf("%d",&temp->data);
		clrscr();
		printf("\n\tUpdated ");
	}
}
void deletespeci()
{
	search();
	if (flag==1)
	{
		if(start==end)
		{
			printf("\n%d Deleted ",start->data);
			free(end);
			free(start);
			start=NULL;
			end=NULL;
			temp=NULL;
		}
		else if(start->data==se)
		{
			printf("\n%d Deleted ",start->data);
			start=start->next;
			free(temp);
		}
		else
		{
			printf("\n%d Deleted ",temp->data);
			for(x=start;x->next!=temp;x=x->next);
			x->next=temp->next;
			free(temp);
		}
	}
}
void insertbetween()
{
	search();
	if(flag==1)
	{
		x=(struct linkd *)malloc(sizeof(struct linkd));
		printf("\nEnter Data ->");
		scanf("%d",&x->data);
		x->next=temp->next;
		temp->next=x;
		clrscr();
		printf("\n\tSaved ");
	}
}
void main()
{
	int choice;
	do
	{
		clrscr();
		printf("\n\t\tNext Node Linked List ");
		printf("\nPress\n1->InsartLast\n2->InsertFirst\n3->DeleteLast\n4->DeleteFirst\n5->Display\n6->Search\n7->Update\n8->DeleteSpeci\n9->InseartBetween\n0->Exit\n-->");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:clrscr();insertLast();getch();break;
			case 2:clrscr();insertFirst();getch();break;
			case 3:clrscr();deleteLast();getch();break;
			case 4:clrscr();deleteFirst();getch();break;
			case 5:clrscr();display();getch();break;
			case 6:clrscr();search();getch();break;
			case 7:clrscr();update();getch();break;
			case 8:clrscr();deletespeci();getch();break;
			case 9:clrscr();insertbetween();getch();break;
			case 0:exit(0);break;
			default:printf("\nEnter Right Choice ");getch();break;
		}
	}while(1);
}


