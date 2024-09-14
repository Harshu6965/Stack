#include<stdio.h>
#include<stdlib.h>

# define max 10

int num[max],top=-1;
void push(int num[],int val)
{
   if(top==max-1)
   {
    printf("stack is overflow");
   }
   else
   {
    printf("enter value of insert number:\n");
    scanf("%d",&val);
    top++;
    num[top]=val;
    printf("the number entered in stack is:%d\n",val);
   }

}
int pop(int num[])
{
    int val;
    if(top==-1)
    {
        printf("stack is underflow");
    }
    else
    {
        val=num[top];
        top--;
        printf("the deleted value from stack is:%d\n",val);
        return val;
    }
}
int peek(int num[])
{
    int val;

    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        val=num[top];
        printf("peek value of stack is:%d\n",val);
    }
}
void display(int num[])
{
    int i;
    if(top==-1)
    {
        printf("stck is empty");
    }
    else
    {
        printf("all stack element :\n");
        for(i=0;i<=max;i++)
        {
            printf("%d \n",num[i]);
        }
    }
}

int main()
{
    int val,op;

    do
    {
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("enter your choice\n");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
            push(num,val);
            break;
            case 2:
            pop(num);
            break;
            case 3:
            peek(num);
            break;
            case 4:
            display(num);
            break;
        }
    }
    while(op!=5);
    return 0;
}