#include<stdio.h>
int main()
{
	int i,len,fl=0;
	char str1[100];
	printf("\n enter string :");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++);
	{
		printf("\n string length=%d",i);
	}
	len=i;
	for(i=0;i<len;i++)
                  {
		printf("\n %c - %c",str1[i-1],str1[len-i]);
		if(str1[i-1]==str1[len-i])
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
	
