#include<stdio.h>
int main()
{
	int a[5][5],diagonal_total=0,upper_total=0,lower_total=0;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n a[%d][%d]  :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n your matrix is_____________________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			if(i==j)
			{
				
				diagonal_total=diagonal_total+a[i][j];
			}
			else if(i<=j)
			{
				
				upper_total=upper_total+a[i][j];
			}
			else if(j<=i)
			{
				
				lower_total=lower_total+a[i][j];
			}
		}
	}
			
			printf("\n  diagonal_total :%d",diagonal_total);
			printf("\n  upper_total :%d",upper_total);
			printf("\n  lower_total :%d",lower_total);
	
	return 0;
}
	


