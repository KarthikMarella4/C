#include<stdio.h>
int main()
{
	int totalmarks;
	scanf("%d",&totalmarks);//750
	if(totalmarks>=750)
	{
		printf("distant");
	}
	else if(totalmarks>=600)
	{
		printf("first");
	}
	else
	{
		printf("second");
	}
	return 0;
}
