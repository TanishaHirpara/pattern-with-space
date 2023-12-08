#include<stdio.h>

 int main()

{
	int i,j,k;
for(i=1;i<=5;i++)
	{
		for(k=i;k>=1;k--)
			{
			printf(" ");
		}
			for(j=i;j<=5;j++)
		{
			if((i+j)%2==0)
			{
				printf("-");
			}
			else
			{
				printf("|");
			}
		}
		printf("\n");
	}
	
}
