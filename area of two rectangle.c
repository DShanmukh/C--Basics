#include<stdio.h>
int main()
{
    int L,B,l,b,W,C, Area1,Area2,Area3,Amount;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    Area1=L*B;
    l=L-(2*W);
    b=B-(2*W);
    Area2=l*b;
    Area3=Area1-Area2;
    Amount=Area3*C;
    printf("%d",Amount);
    if(Amount=0)
    {
        printf("impossible");
    }
