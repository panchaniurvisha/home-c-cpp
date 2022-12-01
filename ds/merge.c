#include<stdio.h>
int main()
{
    int a[50],b[50],n,c[20],i,k;
    printf("\n enter array size:");
    scanf("%d",&n);
    printf("\n enter array elements :");
    for(int i=0;i<n;i++){
        scanf("\t%d",&a[i]);
    }
    printf("\n enter array elements :");
    for(i=0;i<n;i++){
        scanf("\t%d",&b[i]);
    }
    for(int i=0;i<n;i++)
       printf("%d\n",a[i]);
    return 0;
}