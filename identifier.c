#include<stdio.h>
#include<math.h>
#include<string.h>
void main(){
	char ident[30];
	int i,n,count=0;
	printf("enter the string:");
	scanf("%[^\n]",&ident);
	n=strlen(ident);
	//checking identifier
	if(isalpha(ident[0]))
	{
		printf("\nchecking..");
	}
	else
	{
		printf("\ninvalid identifier...1");
		exit(0);
	}
	for(i=1; i<n; i++)
	{
		if( isalpha(ident[i])|| (ident[i]=='_') || isdigit(ident[i]) )
		{
			if(ident[i]=='_')
			{
				count++;
				if(count>=2)
				{
					printf("\ninvalid identifier...2");
					exit(1);
				}
				continue;
			}
		}
		else{
			printf("\ninvalid identifier...3");
			exit(2);
		}
	}
	printf("\nvalid identifier...2");
}
