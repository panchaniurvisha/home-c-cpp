#include<stdio.h>//nrwp
void docalc(float maths, float physics, float chemistry )
{
	float total,per;
	total=maths+physics+chemistry;
	printf("\n total =%.3f",total);
	per=total/3;
	printf("\n per=%.3f",per);
	if(per>=75)
	{
		printf("\n grade a");
	}
	else if(per>=60 && per<75)
	{
		printf("\n grade b");
	}
	else if(per>=50&&per<60)
	{
		printf("\n grade c");
	}
	else if(per>=40&&per<50)
	{
		printf("\n grade d");
	}
	else
	{
		printf(" fail");
	}
}
float getdata()
{
	float maths,physics,chemistry;
	printf("\n maths :");
	scanf("%f",&maths);
	printf("\n physics :");
	scanf("%f",&physics);
	printf("\n chemistry:");
	scanf("%f",&chemistry);
	docalc(maths, physics, chemistry);
	
}
float main()
{
	getdata();
}
	
