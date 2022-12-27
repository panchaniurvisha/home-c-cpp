#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node* sorted = NULL;
void push(int val)
{
    struct node* newnode  = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = head;
    head = newnode;
}
void sortedInsert(struct node* newnode)
{
    if (sorted == NULL || sorted->data >= newnode->data) {
        newnode->next = sorted;
        sorted = newnode;
    }
    else {
        struct node* current = sorted;
        while (current->next != NULL
               && current->next->data < newnode->data) {
            current = current->next;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
}
void insertionsort()
{
    struct node* current = head;
    while (current != NULL) {
        struct node* next = current->next;
        sortedInsert(current);
        current = next;
    }
    head = sorted;
}
void printlist(struct node* head)
{
    while (head != NULL) {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL");
}
int main()
{
    push(5);
    push(20);
    push(11);
    push(3);
    push(30);
    push(10);
    push(2);
    printf("Linked List before sorting:\n");
    printlist(head);
    printf("\n");
    insertionsort(head);
    printf("Linked List after sorting:\n");
    printlist(head);
}
/*#include <math.h>
#include <stdio.h>
 
/* Function to sort an array using insertion sort*/
/*void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        /*while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}*/
 
// A utility function to print an array of size n
/*void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}*/
 
/* Driver program to test insertion sort */
/*int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}*/