//ARKADEMY BATCH 13-5
//Norman Ahmad Rabbani
//Soal no. 2

#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <string>
#include <conio.h>

using namespace std;

bool username(char id[])
{
	int counter=0, i;
	bool result = false;
	
	for(i=0;i<id[i];i++)
	{
		if(islower (id[i]) == 0 )
		{
			counter=counter+8;
		}
		
		counter=counter+1;
	}
	
	if (counter <3 || counter >5 )
	{
		result = false;
		cout<<"False"<<endl;
	}
	else
	{
		result = true;
		cout<<"True"<<endl;
	}
	
	return result;
}

bool password(char pw[])
{
	int counter=0, i,j,k,l,max;
	bool result = false;
	char a[] = "-";
	
	for(i=0;i<3;i++)
	{

		if(isdigit (pw[i]) == 0 )
		{
			counter=counter+11;
		}
		counter=counter+1;
	}

	
	for(j=3;j<4;j++)
	{

		if(ispunct (pw[j]) == 0)
		{
			counter=counter+11;
		}
		else
		{
		counter=counter+1;
		}
	}

	
	for(k=4;k<7;k++)
	{

		if(isdigit (pw[k]) == 0 )
		{
			counter=counter+11;
		}
		
		counter=counter+1;
	}
	
	for(l=7;l<11;l++)
	{

		if(isupper (pw[l]) == 0)
		{
			counter=counter+11;
		}
		
		counter=counter+1;
	}
	for(max=11;max<12;max++)
	{
		if(isalnum(pw[max]) != 0 || ispunct(pw[max]) !=0)
		{
			counter=counter+11;
		}
	}

	if(pw[3] != a[0])
	{
		counter=counter+10;
	}
	

	if (counter == 11 )
	{
		result = true;
		cout<<"True"<<endl;
	}
	else
	{
		result = false;
		cout<<"False"<<endl;
	}
	
	return result;
}

int main()
{

	char user[100]="";
	char pass[100]="";

	cout<<"Masukan Username ";
	cin.getline(user, sizeof(user));
	cout<<endl;
	
	cout<<"Masukan Password ";
	cin.getline(pass, sizeof(pass));
	cout<<endl;
	
	cout<<"Username ";
	username(user);
	cout<<endl;
	
	cout<<"Password ";
	password(pass);
	cout<<endl;
	
	
	return 0;
}
