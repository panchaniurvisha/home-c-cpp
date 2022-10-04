#include<stdio.h>//wrnp
float docalc()
{
	float maths,physics,chemistry,total,per;
	printf("\n maths :");
	scanf("%f",&maths);
	printf("\n physics :");
	scanf("%f",&physics);
	printf("\n chemistry:");
	scanf("%f",&chemistry);
	total=maths+physics+chemistry;
	printf("\n total =%.3f",total);
	per=total/3;
	
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
	return per;	
}
float getdata()
{
	float per;
	per=docalc();
	printf("\n per=%.3f",per);
}
float main()
{
	getdata();
}
	
