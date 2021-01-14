#include<stdio.h>
int main()
{
	int i, j, pixels, digits[10], x, stage;
	printf("Enter the pixels:");
	scanf("%d",&pixels);
	printf("Enter the no. digits:");
	scanf("%d", &x);
	printf("Enter digits:");
	
	for(i=0; i<x; i++)
		scanf("%d", &digits[i]);
	
	if(x>0)
	{
		for(stage=0; stage<2*pixels+3; stage++)
		{
			if(stage==0)
			{
				for(i=0; i<x; i++)
				{
					if(digits[i]==2 || digits[i]==3 || digits[i]==5 || digits[i]==6 || digits[i]==7 || digits[i]==8 || digits[i]==9 || digits[i]==0)
					{
						printf(" ");
						for(j=0; j<pixels; j++)
						{
							printf("-");
						}
						printf(" ");
					}
					else if(digits[i]==1)
					{
						printf(" ");
					}
					else if(digits[i]==4)
					{
						for(j=0; j<pixels+2; j++)
							printf(" ");
					}
				}
			}
			else if(stage>0 && stage < pixels+1)
			{
				for(i=0; i<x; i++)
				{
					if(digits[i]==1)
					{
						printf("|");
					}
					else if(digits[i]==5 || digits[i]==6)
					{
						printf("|");
						for(j=0; j<pixels+1; j++)
						{
							printf(" ");
						}
					}
					else if(digits[i]==2 || digits[i]==7 || digits[i]==3)
					{
						for(j=0; j<pixels+1; j++)
							printf(" ");
						printf("|");
					}
					else if(digits[i]==4 || digits[i]==8 || digits[i]==9 || digits[i]==0)
					{
						printf("|");
						for(j=0; j<pixels; j++)
							printf(" ");
						printf("|");
					}
				}
			}
			else if(stage==pixels+1)
			{
				for(i=0; i<x; i++)
				{
					if(digits[i]==0 || digits[i]==7)
					{
						for(j=0; j<=pixels+1; j++)
						{
							printf(" ");
						}
					}
					else if(digits[i]==1)
					{
						printf(" ");
					}
					else if(digits[i]==2 || digits[i]==3 || digits[i]==4 || digits[i]==5 || digits[i]==6 || digits[i]==8 ||digits[i]==9)
					{
						printf(" ");
						for(j=0; j<pixels; j++)
						{
							printf("-");
						}
						printf(" ");
					}
				}
			}
			else if(stage>=pixels+2 && stage<2*pixels+2)
			{
				for(i=0; i<x; i++)
				{
					if(digits[i]==1)
					{
						printf("|");
					}
					else if(digits[i]==2)
					{
						
						printf("|");
						for(j=0; j<pixels+1; j++)
							printf(" ");
					}
					else if(digits[i]==3 || digits[i]==4 || digits[i]==7 || digits[i]==5 || digits[i]==9)
					{
						for(j=0; j<pixels+1; j++)
							printf(" ");
						printf("|");
					}
					else if(digits[i]==6 || digits[i]==8 || digits[i]==0)
					{
						printf("|");
						for(j=0; j<pixels; j++)
							printf(" ");
						printf("|");
					}
				}
			}
			else if(stage==2*pixels+2)
			{
				for(i=0; i<x; i++)
				{
					if(digits[i]==1)
						printf(" ");
					else if(digits[i]==4 || digits[i]== 7)
					{
						for(j=0; j<pixels+2; j++)
							printf(" ");
					}
					else
					{
						printf(" ");
						for(j=0; j<pixels; j++)
							printf("-");
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	}
}

