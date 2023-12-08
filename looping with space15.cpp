#include<stdio.h>

 int main()

{
     int i,j,k;
     
	for(i=1;i<=5;i++)
	
	{
	 char ch='A';
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=6-i;j++)
		{
			printf("%c" ,ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}