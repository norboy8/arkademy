//ARKADEMY BATCH 13-5
//Norman Ahmad Rabbani
//Soal no. 5

#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <string>
#include <conio.h>

using namespace std;

int pairSocks(int socks[])
{
	int i,j,k,pair=0;
	
	for (i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			if(j != i)
			{
				if (socks[i] != 0)
				{
					if (socks[i] == socks[j])
					{
						pair=pair+1;
						socks[i]=0;
						socks[j]=0;
					}
				}
			}
		}
	}
	
	cout<<pair<<" Pair"<<endl;
}
int main()
{
	int kaosKaki[100] = {1,2,3,4,5,6,7,8,9};	
	
	pairSocks(kaosKaki);
	
	return 0;
}
