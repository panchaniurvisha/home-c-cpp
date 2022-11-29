#include<stdio.h>
#define size 5
int queue[size];
int front = -1,rear = -1;
void insert_queue(int added_item)
{
    if(front==-1 && rear == -1)
    {
        front=0;
        rear=0;
        queue[rear]=added_item;
    }
    else if((rear+1)%size==front)
    {
        printf("queue is overflow");
    }
    else
    {
        rear=(rear+1)%size;
        queue[rear]=added_item;// assigning a value to the queue at the rear position.
    }
}
int delete_queue()
{
    if((front==-1)&&(rear==-1))
    {
        printf("\n queue is underflow");
    }
    else if(front==rear)
    {
        printf("\n deleted elements is :%d",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("\n the deleted elements is :%d",queue[front]);
        front=(front+1)%size;
    }
}
void display_queue()
{
    if(front=-1)
    {
        printf("\n queue is empty");
        return;
    }
    printf("\n queue elements :");
    if(rear>=front)
    {
        for(int i=front;i<=rear;i++)
            printf("%d",queue[i]);
    }
    else
    {
        for(int i=front;i<size;i++)
        printf("%d",queue[i]);
        
        for(int i=0;i<=rear;i++)
        printf("%d",queue[i]);
    }
}
int main()  
{  
    int choice,x;   // variables declaration  
      
    while(choice!=0)   // while loop  
    {  
        printf("\nPress 1: Insert an element");  
        printf("\nPress 2: Delete an element");  
        printf("\nPress 3: Display the element");  
        printf("\nEnter your choice");  
        scanf("%d", &choice);  
      
        switch(choice)  
        {  
            case 1:  
            printf("Enter the element which is to be inserted :");  
            scanf("%d",&x);  
            insert_queue(x);  
            break; 

            case 2:  
            delete_queue();  
            break;

            case 3:  
            display_queue(); 
            break; 
        }
    }
    return 0;  
}  


