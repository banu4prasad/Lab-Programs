#include <stdio.h>
#include <stdlib.h>
struct node
{
int info;
struct node *rlink;
struct node *llink;
};
typedef struct node *NODE;
NODE createnode(int value)
{
NODE X;
X = (NODE)malloc(sizeof(struct node));
if(X==NULL)
printf("memo allocation fail");
X->info = value;
X->rlink= X->llink = NULL;
return(X);
}
void freenode(NODE X)
{
free(X);
}
NODE insertrear(NODE first)
{
NODE temp;
int value;
NODE cur;
printf("insert the value you want to insert");
scanf("%d",&value);
temp = createnode(value);
if(first == NULL)
return(temp);
else
{
cur = first;
while(cur->rlink!=NULL)
{
cur = cur -> rlink ;
}
cur -> rlink =temp;
temp->llink =cur;
return (first);
}
}
NODE deleterear (NODE first)
{
NODE cur,prev;
if(first==NULL)
printf("list is empty");
if(first->rlink==NULL)
{
printf("deleted element is %d",first->info);
freenode(first);
return (NULL);
}
else
{
prev = NULL;
cur = first;
while(cur->rlink!=NULL)
{
prev = cur;
cur = cur->rlink;
}
printf("deleted element is %d",cur->info);
freenode(cur);
prev->rlink=NULL;
return(first);
}
}
NODE insertfront(NODE first)
{
int value;
NODE temp;
printf("insert the value you want to insert");
scanf("%d",&value);
temp =createnode(value);
if(first==NULL)
return(temp);
temp->rlink= first;
first->llink=temp;
return (temp);
}
NODE deletefront(NODE first)
{
NODE second;
if(first==NULL) //check for empty list
{
printf("List is empty cannot deleted\n");
return NULL; //we can replace NULL with first also
}
if(first->rlink==NULL) //delete if there is only one node
{
printf("item deleted=%d\n",first->info);
free(first);
return NULL;
}
second=first->rlink; //get the address of second node
second->llink=NULL;//make second node as first node
printf("item deleted=%d\n",first->info);
free(first); //delete the first node
return second;
}
void display( NODE first)
{
int count;
NODE cur;
if(first==NULL)
printf("stack is empty");
if(first->rlink==NULL)
{
printf("%d",first->info);
count++;
printf("number of nodes is %d",count);
}
else
{
printf("contents are : \n");
cur=first;
while(cur!=NULL)
{
count++;
printf("%d \n",cur->info);
cur=cur->rlink;
}
printf("\n");
printf(" number of nodes is %d \n",count);
}
}
int main()
{
int choice,value;
NODE first = NULL;
while(1)
{
printf(" \n enter your choice \n");
printf("1.insertrear \n 2.deleterear \n 3.insertfront \n 4.deletefront \n 5.display \n 6.exit \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
first = insertrear(first);
break;
case 2:
first= deleterear(first); break;
case 3:
first = insertfront(first);
break;
case 4:
first = deletefront(first);
break;
case 5:
display(first);break;
case 6:
exit(0);
}
}
return 0;
}