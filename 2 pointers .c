#include<stdio.h>
int main ()
{
	int a=27;
	int *p;
	p=&a;
	printf("%d", p);
	printf("%d",&a);
	int **q;
	q=&p;
	printf("%d",q);
	printf("%d",**q);
	int ***r;
	r=&q;
	printf("%d",r);
	printf("%d",***r);
}
