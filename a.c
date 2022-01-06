#include<stdio.h>
void main()
{
	
	int i=1;
	int n,sum=0;
	printf("enter n value");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
	
}
