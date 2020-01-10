#include<stdio.h>
#include<string.h>
void main()
{
	int n,i,j,k,temp=0;
	char a[50];
	printf("enter a sentence:");
	gets(a);
	n=strlen(a);
	for(i=0; i<=n; i++)
	{
		if(a[i]!=' ' || a[i]!='\0')
		{
			temp++;
			printf("%c",a[i]);
		}
		if(a[i]==' ' || a[i]=='\0') 
		{
			for(j=temp-1; j>0; j--)
			{
				printf("*");
			}
			printf("\n");
		temp=0;
		}
	}
	
}
