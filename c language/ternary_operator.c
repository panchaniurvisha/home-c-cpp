#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,max;
    printf("\n enter a:");
    scanf("%d",&a);
    printf("\n enter b:");
    scanf("%d",&b);
    printf("\n enter c:");
    scanf("%d",&c);
    max=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
    printf("\n maximum no :%d",max);
    return 0;
}