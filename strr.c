#include<stdio.h>
int main()
{
	char str[20],rev[20];
	printf("enter string :");
	scanf("%[^\n]s",str);
	printf("\n your string is =%s",str);
	int i;
	for(i=0;str[i]!='\0';i++);
	{
		printf("\n your string is =%d",i);
	}
	int k=i;
	for(int j=0;j<i;j++)
	{
		rev[j]=str[--k];
	}
	rev[i]='\0';
	printf("\n reverse string :%s",rev);
	return 0;
}

