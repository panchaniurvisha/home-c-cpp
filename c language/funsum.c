#include<stdio.h>
void dosum()
{
	int a,b;
	printf("\n enter two value :\n");
	scanf("%d  %d",&a,&b);
	
	printf("\n sum =%d",a+b);
	printf("\n substraction =%d",a-b);
	printf("\n multiply =%d",a*b);
	printf("\n devision =%d",a/b);
}	
int main()
{
	dosum();
}
