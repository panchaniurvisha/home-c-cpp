/*#include<stdio.h>
#define pr printf //pre-processor directive
#define SIZE 10 //globally declaration constant value
int main()
{
    pr("hello");
}
void findSimpleInterest()
{
}*/
//stack :last in first out
/*#include<stdio.h>
#define SIZE 10
int a[SIZE],top=-1;
void push(int val)
{
    if(top>=10)
        stack overflow
    else
        a[++top]=val;
}
void pop()
{
    if(top<0)
        stack underflow
    else
        x=a[top--];
}*/
#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);

int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n)
    {
        printf("\n\tSTACK is overflow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        stack[++top]=x;
        //top++;
        //stack[top]=x;
    }
}
void pop()
{
    if(top<0)
    {
        printf("\n stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top--]);
    }
}
void display()
{
    if(top>=n)
    {
        printf("\n\t stack is over flow");
    }
    else
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
        printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
}
