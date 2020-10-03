#include<stdio.h>
#include<stdlib.h>
struct slist
{
	int info;
	struct slist *next;
};
void traverse(struct slist *);
void insert_first(struct slist **,int);
void insert_last(struct slist **,int);
void delete_first(struct slist **);
void delete_last(struct slist **);
int count(struct slist *);
void reverse(struct slist **);
int main()
{
	struct slist *head=NULL;
	int ch,item,cnt;
	while(1)
	{
		printf("\n1. Create\n2. Traverse\n3. Insert First\n4. Insert Last\n5. Delete First\n6. Delete Last\n7. count\n8. reverse\n0. Exit\n\nChoice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: break;
			case 2: traverse(head);
				break;
			case 3: printf("\nEnter item to be inserted : ");
				scanf("%d",&item);
				insert_first(&head,item);
				break;
			case 4: printf("\nEnter item to be inserted : ");
                                scanf("%d",&item);
				insert_last(&head,item);
				break;
			case 5: delete_first(&head);
				break;
			case 6: delete_last(&head);
                                break;
			case 7: cnt=count(head);
				printf("\n *no of items :%d ",cnt);
                                break;
			case 8: reverse(&head);
				break;

			case 0: exit(0);
			default: printf("\nWrong choice ....");
		}
	}
	return(0);
}
void traverse(struct slist *head)
{
	struct slist *loc=head;
	while(loc!=NULL)
	{
		printf("\n %d \n ",loc->info);
		loc=loc->next;
	}
}
void insert_first(struct slist **phead,int item)
{
	struct slist *newnode;
	newnode=(struct slist *)malloc(sizeof(struct slist));
	newnode->info=item;
	newnode->next=*phead;
	*phead=newnode;
}

void insert_last(struct slist **phead,int item)
{
	struct slist *newnode,*loc;
	newnode=(struct slist *)malloc(sizeof(struct slist));
	newnode->info=item;
	newnode->next=NULL;
	loc=*phead;
	if (loc == NULL)
	{
		*phead=newnode;
		return;
	}
	while(loc->next !=NULL)
		loc=loc->next;
	loc->next=newnode;
	return;
}
void delete_first(struct slist **phead)
{
	struct slist *newnode,*temp;
	if(*phead==NULL)
	{
		printf("empty set");
		return;
	}
	temp=*phead;
	*phead=(*phead)->next;
	temp->next=NULL;
	free(temp);
	return;
}
void delete_last(struct slist **phead)
{
	struct slist *newnode,*loc,*locp;
        if(*phead==NULL)
        {
                printf("empty set");
                return;
        }
	locp=NULL;
	loc=*phead;
	while(loc->next!=NULL)
	{
		locp=loc;
		loc=loc->next;
	}
	if(loc==*phead)
		*phead=NULL;
	else
		locp->next=NULL;
	loc->next=NULL;
	free(loc);
	return;
}
int count(struct slist *head)
{
	struct slist *newnode,*loc;
	int cnt;
	cnt=0;
	loc=head;
	while(loc!=NULL)
	{
		cnt=cnt+1;
		loc=loc->next;
	}
	return(cnt);
}
void reverse(struct slist **phead)
{
	struct slist *locp,*loc,*locn;
	if (*phead==NULL || (*phead)->next==NULL)
		return;
	loc=*phead;
	locp=NULL;
	while(loc!=NULL)
	{
		locn=loc->next;
		loc->next=locp;
		locp=loc;
		loc=locn;
	}
	*phead=locp;
	return;
}