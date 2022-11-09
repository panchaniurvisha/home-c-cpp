#include<stdio.h>//nrwp
void aot(int h,int b)
{
	printf("\n h :%d \t b :%d",h,b);
	printf("\n area of triangle :%d",(h*b)/2);
}
int main()
{
	int a,c;
	printf("\n enter height :");
	scanf("%d",a);
	printf("\n enter base :");
	scanf("%d",c);
	aot(a,c);
}
	