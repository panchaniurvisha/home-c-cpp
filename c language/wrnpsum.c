#include<stdio.h>
int  dosum()
{
	int a,b;
	printf("\n enter two value :");
	scanf("%d%d",&a,&b);
	return(a+b);
}
int main()
{
	int sum;
	sum=dosum();
	printf("\n sum:%d",sum);
	
}

				