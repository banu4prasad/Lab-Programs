#include <stdio.h>
#include <stdlib.h>
#define max 3
struct stack {
int top;
int q[max];
}s;
void insert(struct stack *s,int value)
{
if(s->top == max-1)
{
printf("stack is full \n");
}
else
{
(s->top)++;
s->q[s->top]=value;
printf("insertion is successful \n");
}
}
void deletion(struct stack *s)
{
if(s->top==-1)
{
printf("stack is empty \n");
}
else
{
printf("deleted element is %d \n",s->q[s->top]);
(s->top)--;
}
}
void display(struct stack *s)
{
if(s->top==-1)
{
printf("stack is empty \n");
}
else
{
printf("contents of stacks are \n");
for(int i = 0; i<=s->top;i++)
{
printf("%d \n",s->q[i]);
}
}
}
int main()
{
int choice,value;
s.top=-1;
while(1)
{
printf("enter your choice \n");
printf("1.insert \n2.delete \n3.display \n4.exit \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the value you want to insert\n");
scanf("%d",&value);
insert(&s,value);
break;
case 2:
deletion(&s);
break;
case 3:
display(&s);
break;
case 4: exit(0);
}
}
return 0;
}
