#include<stdio.h>

void multi(int n1)
{
	int multi;
	multi=n1*n1*n1;
	printf("multi=%d",multi);
}
int main()
{
	int a;
	printf("enter value=");
	scanf("%d",&a);
	multi(a);
	return 0;
}
