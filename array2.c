#include<stdio.h>
int main()
{
	int i,j;
	int  a[5][5],b[5][5],total;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
		       printf("\n enter a[%d][%d] :",i,j);
		       scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
		       printf("\n enter b[%d][%d] :",i,j);
		       scanf("%d",&b[i][j]);
		}
		
	}
		printf("\n\n\t a\t\t\t\t\tb\t\ttotal\n------------------------------------------------------------------------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		        printf("\t%d",a[i][j]);
		}
		for(j=0;j<3;j++)
		{
		        printf("\t%d",b[i][j]);
		}
		for(j=0;j<3;j++)
		{
			total=a[i][j]+b[i][j];
			printf("\t%d",total);
		}
		printf("\n");
	}
	return 0;	
}
