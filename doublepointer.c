//pointer to pointer..........//double pointer
#include<stdio.h>
int main()
{
	int a=10,*p,**p2;
	p=&a;
	p2=&p;
	printf("\n value of a:%d",a);
	printf("\n address of a:%u",&a);

	printf("\n using a value of p:%d",*p);
	printf("\n using a address of p:%u",p);
	printf("\n address of p:%u",&p);
	//p2---------p--------a;
	printf("\n  using a value of p2:%d",**p2);
	printf("\n using a address of p2:%u",*p2);
	printf("\n using p address of p2:%u",p2);
	printf("\n address of p2:%u",&p2);
	
	
}
