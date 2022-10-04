#include<stdio.h>//wrwp
int reverse(int num)
{
	int rem,reverse=0;
	while(num>0)
	{
		rem=num%10;//154%10=4..........15%10=5.....1%10=1
		reverse=reverse*10+rem;//0*10+4=4........4*10+5=45.......45*10+1=451
		num=num/10;154/10=15.......15/10=1.....0
	}
	return reverse;
}
int main()
{
	int num;
	printf("\n enter integer :");
	scanf("%d",&num);
	printf("\n reverse :%d",reverse(num));
}