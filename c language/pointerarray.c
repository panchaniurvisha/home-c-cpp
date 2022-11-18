#include<stdio.h>
int main()
{
    int a[5]={11,22,33,44,55};
    int *ptr=NULL;//don't have any address specified in the pointer
    ptr=a;/*  *ptr = &arr;
                    *ptr = arr;
                    *ptr = &arr[0];*///base address store in pointer
    printf("\n address\tvalue\n");
    printf("--------------------------");
    for(int i=0;i<5;i++)
    //printf("\n %u\t%d",&a[i],a[i]);
    printf("\n %u\t%d",(ptr+i),*(ptr+i));
    //printf("\n %u\t%d",(ptr+2),*(ptr+2));//int size 2,float 4,ch 1;
}