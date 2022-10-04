#include<stdio.h>//wrnp
#include<math.h>
float docompound()
{
	float principal,rate,time;
	printf("\n enter principal :");
	scanf("%f",&principal);
	printf("\n enter rate:");
	scanf("%f",&rate);
	printf("enter time :");
	scanf("%f",&time);
	return(principal*(pow((1+rate/100),time)-1));
	
}
float main()
{
	float ci;
	ci=docompound();
	printf("\n ci :%f",ci);
}