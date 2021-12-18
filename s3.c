#include<stdio.h>
void main()
{
	int time;
	scanf("%d",&time);
	if(time<=12)
	{
		printf("get up");
		printf("\ndo breakfast");
	}
	else
	{
		printf("sleeping");
		printf("\nagain");
	}
}
