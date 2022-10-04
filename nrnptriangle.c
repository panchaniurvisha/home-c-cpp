#include<stdio.h>//nrnp
void dotriangle()
{
	int i,j,sp=10;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<sp;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		printf("\n");
		sp--;
	}
}
int main()
{
	dotriangle();
}