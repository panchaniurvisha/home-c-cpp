#include<string.h>
#include<stdio.h>
struct student //syntax
{
	int roll_no;//structer member
	char name[10];
	int m1,m2,m3,total;
	float per;
};
int main()
{
	int i;
	struct student st[5] ; //...syntax....structer tag....structer variable
	printf("enter records of 2 students");
	for(i=0;i<2;i++)
	{
		printf("enter roll_no:");
		scanf("%d",&st[i].roll_no);
		printf("enter name :");
		scanf("%s",&st[i].name);
		printf("enter m1:");
		scanf("%d",&st[i].m1);
		printf("enter m2:");
		scanf("%d",&st[i].m2);
		printf("enter m3:");
		scanf("%d",&st[i].m3);
	}
	printf("\n student information list :");
	for(i=0;i<2;i++)
	{
		st[i].total=st[i].m1+st[i].m2+st[i].m3;
		st[i].per=st[i].total/3;
		printf("\n roll_no :%d\n name :%s",st[i].roll_no,st[i].name);
		printf("\n total :%d\n per :%f",st[i].total,st[i].per);
	}
	return 0;
}