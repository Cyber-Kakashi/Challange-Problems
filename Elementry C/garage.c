#include<stdio.h>
#include<string.h>
void small(int a[]);
void main()
{
	int one[5], two[5], i, j, k, sorted[10],x,y,debug=0;
	printf("enter five car numbers in garrage1:");
	for(i=0; i<5; i++)
	{
		scanf("%d",&one[i]);
	}
	printf("enter five car numbers in garrage2:");
	for(i=0; i<5; i++)
	{
		scanf("%d",&two[i]);
	}
	/*entering iterations*/
	small(one);
	small(two);
	j=0;
	i=0; 
	for(k=0; k<10 ; k++)
	{
		sorted[k]=(one[i]<two[j])?(one[i]):(two[j]);
		if(i >= 5)
		{
			for(debug=j; debug<5; debug++)
				printf("\n%d",two[debug]);
			break;
		}
		else if(j >= 5)
		{
			for(debug=i; debug<5; debug++)
				printf("\n%d",one[debug]);
			break;
		}
		else if( one[i]<two[j] )
		{
			i++;
		}	
		else
		{
			j++;
		}
		printf("\n%d",sorted[k]);
	}
	
}

void small(int a[])
{
	int i=0,j=0,temp=0;
	for(i=0; i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0; i<5; i++)
	{
		printf(" %d",a[i]);
	}
}
