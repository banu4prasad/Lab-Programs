#include <stdio.h>
#include <stdlib.h>
#define max 5
//simple queue it is
struct queue
{
int rear;
int front;
int q[max];
}s;

void insert(struct queue *s , int value)
{
if(s->rear == max-1)
{
printf("queue is full");
}
else{
(s->rear)++;
s->q[s->rear] = value;
}
}
void del(struct queue *s)
{
if(s->front> s->rear)
{
printf("queue is empty");
}
else
{
printf("deleted item is %d", s->q[s->front]);
(s->front)++;
}
}
void display(struct queue *s)
{
int count = 0;
if(s->front> s-> rear)
{
printf("queue is empty \n");
}
else
{ printf("elements are \n");
for(int i=s->front;i<= s-> rear;i++)
{
count ++;
printf("%d \n",s->q[i] );
}
printf("number of elements is %d \n",count);
}
}
int main()
{
int choice,value;
s.rear= -1;
s.front = 0;
while(1)
{
printf("enter the choice \n");
printf("1.insert \n 2.delete \n 3.display \n 4.exit \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the value you want to insert");
scanf("%d",&value);
insert(&s,value);
break;
case 2:
del(&s);
break;
case 3:
display(&s);
break;
case 4:
exit(0);
}
}
return 0;
}