#include<stdio.h>//wrwp
#include<math.h>
float docompound(float principal,float rate,float  time)
{
	float ci;
	ci=principal*(pow((1+rate/100),time)-1);
	return ci;
	
}
float main()
{
	float principal,rate,time,ci;
	printf("\n enter principal :");
	scanf("%f",&principal);
	printf("\n enter rate:");
	scanf("%f",&rate);
	printf("\n enter time :");
	scanf("%f",&time);
	ci=docompound(principal,rate,time);
	printf("\n ci :%f",ci);
	return 0;
}