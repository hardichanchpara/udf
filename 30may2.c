#include<stdio.h>

void divi(int n1)
{
	if(n1%3==0 && n1%5==0)
	{
		printf("this number is divisable by 3 and 5");
	}
	else
	{
			printf("this number is not divisable by 3 and 5");
	}
}
int main()
{
	int i;
	printf("enter value you want to check=");
	scanf("%d",&i);
	divi(i);
}
