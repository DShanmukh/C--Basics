#include<stdio.h>
void main()
{
	
	int i=1;
	
	int n,product=1;
	printf("enter n value");
	scanf("%d",&n);
	while(i<=n)
	{
		product=product*i;
		i++;
	}
	printf("%d",product);
	
}
