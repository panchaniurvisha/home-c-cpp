#include<stdio.h>//nrnp
#include<math.h>
void docompound()
{
	float principal,rate,time,ci;
	printf("\n enter principal :");
	scanf("%f",&principal);
	printf("\n enter rate:");
	scanf("%f",&rate);
	printf("enter time :");
	scanf("%f",&time);
	
	ci=principal*(pow((1+rate/100),time)-1);
	printf("\n compound interest :%f",ci);
	
	
}
float main()
{
	docompound();
}