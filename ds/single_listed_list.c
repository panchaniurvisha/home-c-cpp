//creating list
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *head)
{
    int count=0;
    if(head==NULL)
    printf("\n List is empty");
    struct Node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\t %d",ptr->data);
        count++;
        ptr=ptr->next;
    }
    printf("\n list count :%d",count);
}
//Case 1:Deleting the first element from linked list
struct Node *deleteFirst(struct Node *head){   
    struct Node *ptr=head;
    head = head ->next;
    free(ptr);
    return head;
}
//Case 2:Deleting the element at given index from linked list
struct Node *deleteAtIndex(struct Node *head,int index){
    struct Node *p=head;
    struct Node *q=head->next;
    for(int i=0;i< index -1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
//case 3:Deleting the last elements
struct Node *deleteAtLast(struct Node *head){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next !=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next =NULL;
    free(q);
    return head;
}
//case4:Deleting the elements with a given value from the linked list
struct Node *deleteAtIndex(struct Node *head,int value){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //Allocate memory for nodes in the linked list in heap
    head=(struct Node *)malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data=7;
    head->next=second;
    //link second and third nodes
    second->data=11;
    second->next=third;
    //link second and third nodes
    third->data=21;
    third->next=fourth;
    //link third and fourth nodes
    fourth->data=31;
    fourth->next=NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);
    head= deleteFirst(head);//for deleting first element of the linked list
    head = deleteAtIndex(head,2);//
    head = deleteAtLast(head);

    printf("Linked list after  deletion \n");
    linkedListTraversal(head);
    return 0;
}