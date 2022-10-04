#include<stdio.h>//nrwp
#include<math.h>
void docompound(float principal,float rate,float time )
{
	float ci;
	ci=principal*(pow((1+rate/100),time)-1);
	printf("\n compound interest :%f",ci);
	
	
}
float main()
{
	float principal,rate,time;
	printf("\n enter principal :");
	scanf("%f",&principal);
	printf("\n enter rate:");
	scanf("%f",&rate);
	printf("\n enter time :");
	scanf("%f",&time);;
	
	docompound(principal,rate,time);
}