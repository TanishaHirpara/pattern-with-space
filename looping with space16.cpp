#include<stdio.h>

main()
{
int i,j,k;
char ch='A';
for(i='A';i<='E';i++)
{
	for(k='A';k<=i;k++)
	{
		printf(" ");
	}
	for(j=i;j<='E';j++)
	{
		printf("%c" ,j);
		ch++;
	}
	printf("\n");
	
	}	
}