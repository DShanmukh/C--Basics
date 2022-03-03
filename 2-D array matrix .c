#include<stdio.h>
void main ()
{
	int n,m;
	printf("enter n,m  values");
	scanf("%d%d",&n,&m);
	int a[n][m],i,j,sum=0;
	printf("Enter elements in the array ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	} 
	       for(i=0;i<n;i++)
	       {
	       	    for(j=0;j<m;j++)
		       {
				  printf("%d ",a[i][j]);
	           }
			
		      printf("\n");
		   }
}
