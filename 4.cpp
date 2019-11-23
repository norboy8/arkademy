//ARKADEMY BATCH 13-5
//Norman Ahmad Rabbani
//Soal no. 4


#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <string>
#include <conio.h>

using namespace std;

void abbreviation(char S[])
{
	char temp[1000]="";
	int i,j,k=0;
	for(i=0;i<S[i];i++)
	{
		if(isupper (S[i]) != 0 )
		{
			temp[k]=S[i];
			k++;
		}
	}
	
	for(j=0;j<k;j++)
	{
		cout<<temp[j];
	}
	
	
	
}

int main()
{
	char kalimat[1000] = "";
	
	cin.getline(kalimat, sizeof(kalimat));
	abbreviation(kalimat);
	
	return 0;
}
