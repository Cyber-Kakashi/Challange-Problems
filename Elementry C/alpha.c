#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=n-1; i>=0; i--)
	{
		for(j=97+i; j>=97; j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	
}
