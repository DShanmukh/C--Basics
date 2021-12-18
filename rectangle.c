#include<stdio.h>
void main()
{
	int l,w,s,perimeter,area;
	printf("enter l,w value");
	scanf("%d%d,"&l,&w);
	area =l*w;
	printf("area of rectangle with  l %d and w %d is: %d",l,w,area);
	s= l+w;
	perimeter=2*(s);
	printf("perimeter of rectangle with  l %d and w %d is: %d\n",l,w,perimeter);
	
}
