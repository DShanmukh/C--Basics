#include<stdio.h>
void main()
{  
    	int minute,hour,t;
    	printf("enter t");
    	scanf("%d",&t);
    	minute=t%60;
    	hour=t/60;
    	printf("convert t %d into %d hour(s) ,%d minute(s)",t,hour,minute);
    }
