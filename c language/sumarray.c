#include<stdio.h>
int main()
{
	int i,a[10],even_sum=0,odd_sum=0,evensum=0,oddsum=0,total_elements,total_position;
	for(i=0;i<10;i++)
	{
		printf("\n  a[%d]  :",i);
		scanf("%d",&a[i]);
	}
	printf("\n your array is  :\n\n");
	for(i=0;i<10;i++)
	{
	         if(i%2==0)
		{
			printf("\n even position  :a[%d]",i);
		}
	        else
		{
			printf("\t odd position  :a[%d]\n",i);
		}
	}
	for(i=0;i<10;i++)
	{
	         if(a[i]%2==0)
		{
			printf("\n even elements  :%d             ",a[i]);
		}
	        else
		{
			printf(" \n\t\t\todd elements   :%d\n\t\t\t",a[i]);
		}
	}
	for(i=0;i<10;i++)
	{
	          if(a[i]%2==0)
		{
			even_sum=even_sum+a[i];
		}
	        else
		{
		 	odd_sum=odd_sum+a[i];               
		}
	}
			printf("\n   even_sum  :%d",even_sum);
			printf("\n   odd_sum  :%d",odd_sum);
			total_elements=even_sum+odd_sum;
			printf("\n total_elements  :%d",total_elements);
	for(i=0;i<10;i++)
	{
	          if(i%2==0)
		{
			evensum=evensum+i;
		}
	        else
		{
		 	oddsum=oddsum+i;               
		}
	}
			printf("\n \n  evensum  :a[%d]",evensum);
			printf("\n  oddsum  :a[%d]",oddsum);
			total_position=evensum+oddsum;
			printf("\n \n total_position  :%d",total_position);
	return 0;

}

















