#include<stdio.h>
void main()
{
	int a=0,b=1,c;
	c=a++ && ++b;
	printf("%d %d %d",a,b,c);
}
