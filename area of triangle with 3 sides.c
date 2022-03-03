#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int A,B,C,D;
    float S,Area;
    printf("enter A,B,C values");
    scanf("%d%d%d",&A,&B,&C);
    S=(A+B+C)/2;
    D=(S*(S-A)*(S-B)*(S-C));
    Area=sqrt(D);
    printf("%.2f",Area);
    getch();
    
}
