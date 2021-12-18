#include<stdio.h>
void main()
{
	float p,t,r,i;
	printf("enter p,t,r value");
	scanf("%f%f%f",&p,&t,&r);
	i=(p*t*r)/100;
	printf("simple interest value with  p= %f, t=%f and r= %fis: %.2f",p,t,r,i);
}
