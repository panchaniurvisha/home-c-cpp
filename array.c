#include<stdio.h>
int main()
{
	int i,j,a[5],b[5];

	for(i=0;i<5;i++)
	{
		printf("\n  a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(j=0;j<5;j++)
	{
		printf("\n b[%d] : ",j);
		scanf("%d",&b[j]);
	}
	printf("\n your array  is \n\n");
	printf("a\t b\t total");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
		printf("\t%d",b[i]);
		printf("\t %d",a[i]+b[i]);
	}
	return 0;
}
