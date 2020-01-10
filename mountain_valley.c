#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
	int terrain=0,mhflag=0,mflag=0,vhflag=0,vflag=0,i,j;
	char sterrain[20];
	printf("enter the terrain in the format of uuddddduuu(u for up and d for down):");
	gets(sterrain);
	i=strlen(sterrain);
	puts(sterrain);
	for(j=0; j<i; j++)
	{
		if(sterrain[j]=='u' || sterrain[j]=='U')
		{
			++terrain;
		}
		else if(sterrain[j]=='d' || sterrain[j]=='D') 
		{
			--terrain;
		}
		
		if(terrain>=1 || mhflag>0)
		{
			++mhflag;
			vhflag=0;
			if(terrain==0)
			{
				++mflag;
			}
		}
		if(terrain<=-1 || vhflag>0)
		{
			++vhflag;
			mhflag=0;
			if(terrain==0)
			{
				++vflag;
			}
		}
	}
	printf("....................\nmountains:%d\n",mflag);
	printf("valleys:%d",vflag);
}
