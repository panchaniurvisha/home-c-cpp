#include<stdio.h>
int main()
{
	int i,user[5],unit[5];;
	float bill[5],total_bill[5];
	for(i=0;i<5;i++)
	{
		printf("\n  user  :");
		scanf("%d",&user[i]);
		printf("\n unit :");
		scanf("%d",&unit[i]);
	}
	printf("\nuser\tunit\tbill\ttotal_bill");
	for(i=0;i<5;i++)
	{
	 	if(unit[i]<=100)
		{
			bill[i]=(unit[i]*.60)+50;
		}
		else if(unit[i]>100&&unit[i]<=300)
		{
			bill[i]=((100*.60)+((unit[i]-100)*.80)+50);
		}
		else
		{
			bill[i]=((100*.60)+(200*.80)+((unit[i]-300)*.90)+50);
		}
		if(bill[i]<300)
		{
			total_bill[i]=bill[i];
			
		}

		else
		{
			total_bill[i]=bill[i]*1.15;
		}
			printf("\n%d\t%d\t%.2f\t%.2f",user[i],unit[i],bill[i],total_bill[i]);
	}
		return 0;
}






