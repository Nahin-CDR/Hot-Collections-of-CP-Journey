//Author : Nahin the Coder
//Date : 05-11-2021

#include<bits/stdc++.h>
using namespace std;

bool PrimeCheck(int num)
{
	if(num == 1) return false;
	for(int i=2; i*i<=num; i++)
	{
		if(num%i == 0)
		{
			return false;
		}
	}
	return true;
}




int main()
{
	for(int i=1; i<=100; i++)
	{
		if(PrimeCheck(i))
		{
			cout<<i<<"\n";
		}
	}

	return 0;
}
