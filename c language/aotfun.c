#include<stdio.h>//wrwp
#include<math.h>
float aot(float a,float b,float c)
{
	float s,result;
	s=(a+b+c)/2;
	result=sqrt(s*(s-a)*(s-b)*(s-c));
	return result;
}
float main()
{
	float a,b,c,result;
	printf("\n enter three sides :\n");
	scanf("%f%f%f",&a,&b,&c);
	result=aot(a,b,c);
	printf("\n area of triangle :%.2f\n",result);
	return 0;
}