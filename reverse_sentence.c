#include<stdio.h>
#include<string.h>
void main ()
{
	int n,i=0,j,k,temp=0;
	char a[50];
	printf("enter a sentence:");
	gets(a);
	n=strlen(a);
	flag:
	for(i=i; i<=n; i++)
	{
		if(a[i]!=' ' || a[i]!='\0')
		{
			temp++;
		}
		if(a[i]==' ' || a[i]=='\0') 
		{
			break;
		}
	}
	for(j=i; j>i-temp;j--)			
	{
			printf("%c",a[j]);
	}
	temp=0;
	if(a[i]==' ' && a[i]!='\0')
	{
		i++;
		goto flag;
	}
	
}
