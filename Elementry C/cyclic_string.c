#include<stdio.h>
#include<string.h>
void main ()
{
	int n,i,j,k;
	char a[50],temp;
	printf("enter a word:");
	gets(a);
	n=strlen(a);
	for(i=0; i<n; i++)
	{
		puts(a);
		temp=a[0];
		for(j=0; j<n-1; j++)
		{
			a[j]=a[j+1];
		}
		a[j]=temp;
	}
	
}
