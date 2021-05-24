#include<stdio.h>
int main()
{
	int p1,p2;
	printf("Enter point one:");
	scanf("%d",&p1);
	printf("Enter point two:");
	scanf("%d",&p2);
	printf("Distance:%d",abs(p1-p2));
	return 0;
}
