#include<stdio.h>
int main()
{
	int  a=22,*b;
	printf("\n value of a:%d",a);
	printf("\n address of a:%u",&a);
	
	b=&a;
	printf("\n value of b/address of a %d",b);
	printf("\n address of  b:%u",&b);
	printf("\n value of a using b :%d",b);
	
	
	return 0;
}
/*#include<stdio.h>// swapping without third variable
int main()
{
	int a=10,b=20,*p1=&a,*p2=&b;
	printf("\n before swap :*p1=%d *p2=%d",*p1,*p2);
	*p1=*p1+*p2;//a=a+b
	*p2=*p1-*p2;//b=a-b
	*p1=*p1-*p2;//a=a-b
	printf("\n after swap :*p1=%d *p2=%d",*p1,*p2);
	return 0;
}*/
/*#include<stdio.h>//with third variable
void swap(int *x,int*y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
int main()
{
	int a=10,b=5;
	printf("\n before swapping.....................:");
	printf("\n a=%d",a);
	printf("\n b=%d",b);
	swap(&a,&b);
	printf("\n after swapping.............................");
	printf("\n a=%d",a);
	printf("\n b=%d",b);
	return 0;
}*/

	


	

	
	