#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>

struct linkd
{
	int data;
	struct linkd *next,*prv;
}*start=NULL,*end=NULL,*temp=NULL,*x=NULL;
int se;
int flag=0;
void insertLast()
{
	temp=(struct linkd *)malloc(sizeof(struct linkd));
	printf("\n\t\tInsert Last ...");
	printf("\nEnter Data ->");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp->prv=end;
	if(start==NULL)
		start=temp;
	else
		end->next=temp;
	end=temp;
	clrscr();
	printf("\n\tSaved ");
}
void insertFirst()
{
	temp=(struct linkd *)malloc(sizeof(struct linkd));
	printf("\n\t\tInsert First ...");
	printf("\nEnter Data ->");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp->prv=NULL;
	if(start==NULL)
		end=start;
	else
	{
		start->prv=temp;
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
		end=end->prv;
		free(end->next);
		end->next=NULL;
	}
}
void deleteFirst()
{
	if(start==NULL)
	{
		printf("\nList is Empty");
	}
	else
	{
		printf("\n%d Deleted ",start->data);
		start=start->next;
		free(start->prv);
		start->prv=NULL;
	}
}
void display()
{
	if(start==NULL)
	{
		printf("\nList is Empty");
		return;
	}
	printf("\n\t\tDisplay [First to Last]");
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		//printf("%d->",temp->data);
		printf("\n%u [%d] %u", temp,temp->data,temp->next);
	}
}
void display1()
{
	if(start==NULL)
	{
		printf("\nList is Empty");
		return;
	}
	printf("\n\t\tDisplay [Last to First]");
	for(temp=end;temp!=NULL;temp=temp->prv)
	{
		//printf("%d->",temp->data);
		printf("\n%u [%d] %u", temp,temp->data,temp->prv);
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
		printf("\n\t\tUpdate Data ...");
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
		printf("\n\t\tDelete Specific...");
		if(start==end)
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
			printf("\n%d Deleted ",temp->data);
			temp->prv->next=temp->next;
			temp->next->prv=temp->prv;
			free(temp);
		}
	}
}
void insertbetween()
{
	search();
	if (flag==1)
	{
		x=(struct linkd *)malloc(sizeof(struct linkd));
		printf("\n\t\tInsert Between ...");
		printf("\nEnter Data ->");
		scanf("%d",&x->data);
		temp->next->prv=x;
		x->next=temp->next;
		x->prv=temp;
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
		printf("\n\t\tDubbly Linked List ");
		printf("\nPress\n1->InsartLast\n2->InsertFirst\n3->DeleteLast\n4->DeleteFirst\n5->Display [A-Z]\n6->Search\n7->Update\n8->DeleteSpeci\n9->InseartBetween\n10->Display [Z-A]\n0->Exit\n-->");
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
			case 10:clrscr();display1();getch();break;
			case 0:exit(0);break;
			default:printf("\nEnter Right Choice ");getch();break;
		}
	}while(1);
}


