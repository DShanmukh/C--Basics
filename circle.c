#include<stdio.h>
void main()
{
	float r,c,area,perimeter;
	printf("enter radius of the circle");
	scanf("%f",&r);
	c=3.14*r;
	area=c*r;
	printf("area of circle with radius %f is: %f\n",r,area);
	perimeter = 2*c;
	printf("perimeter of circle with radius %f is: %f",r,perimeter);
}
