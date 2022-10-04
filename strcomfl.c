#include<stdio.h>
int main()
{
	int i,j,len,fl=0;
	char str1[100],str2[100];
	printf("\n enter string :");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++);
	{
		printf("\n string length=%d",i);
	}
	int k=i;
	for(j=0;j<i;j++)
	{
		str2[j]=str1[--k];
	}
	str2[j]!='\0';
	printf("\n reverse string :%s",str2);
	len=i;
	for(i=0;i<len;i++)
                  {
		printf("\n %c - %c",str1[i-1],str2[len-i]);
		if(str1[i]==str2[i])
	//fl=1 true condition otherwise not;
		{
			fl=1;
				
		}
		else
		{
			fl=0;
			break;
		}
	}
	if(fl==1)
	{
		printf("\n string is palindrome");
	}
	else
	{
		printf("\n string is not palindrome ");
	}
	return 0;
}
	
