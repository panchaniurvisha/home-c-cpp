#include<stdio.h>
void dosum(int x,int y)
{
	printf("\nx :%d \ty :%d",x,y);
	printf("\n sum :%d",x+y);
}
int main()
{
	int a,b;
	printf("\n enter two value :");
	scanf("%d%d",&a,&b);
	dosum(a,b);
}

				