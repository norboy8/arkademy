//ARKADEMY BATCH 13-5
//Norman Ahmad Rabbani
//Soal no. 3


#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int kelipatanTiga(int n)
{
	int nilai = 0;
	
	if (n % 3 == 0)
	{
		nilai = 1;
	}
	
	return nilai;
}

int kelipatanTujuh(int n)
{
	int nilai = 0;
	
	if (n % 7 == 0)
	{
		nilai = 1;
	}
	
	return nilai;	
}

void arkademy(int n)
{
	int i;
	
	for (i=1;i<=n;i++)
	{
		if( kelipatanTiga(i) == 1 && kelipatanTujuh(i) == 1)
		{
			cout<<"Arkademy";
		}
		else if (kelipatanTiga(i) == 1)
		{
			cout<<"Arka";
		}
		else if (kelipatanTujuh(i) == 1)
		{
			cout<<"Demy";
		}
		else
		{
			cout<<i;
		}
		
		if(i != n )
		{
			cout<<", ";
		}
	}
}
int main()
{
	int input;
	
	cin>>input;
	
	if(input <1)
	{
		cout<<"Wrong Input, Enter positif non 0 number";
	}
	else
	{
		arkademy(input);
	}
	
	return 0;
}
