#include<stdio.h>
int main()
{
	int i,j,a[5][5],upper_total,lower_total,diagonal_total,upper_elements,lower_elements,diagonal_elements;
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		       printf("a[%d][%d] :",i,j);
		       scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		         printf(" %d  ",a[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	upper_total=a[0][1]+a[0][2]+a[1][2];
	printf("upper_total=%d\n",upper_total);

	upper_elements=a[0][1],a[0][2],a[1][2];
	printf("upper _elements =%d %d %d\n",a[0][1],a[0][2],a[1][2]);

	lower_total=a[1][0]+a[2][0]+a[2][1];
	printf("lower_total=%d\n",lower_total);

	lower_elements=a[1][0],a[2][0],a[2][1];
	printf("lower _elements =%d %d %d\n",a[1][0],a[2][0],a[2][1]);

	diagonal_total=a[0][0]+a[1][1]+a[2][2];
	printf("diagonal_total=%d\n",diagonal_total);

	diagonal_elements=a[0][0],a[1][1],a[2][2];
	printf("diagonal _elements =%d %d %d",a[0][0],a[1][1],a[2][2]);

	printf("\n");
	return 0;
}
	
