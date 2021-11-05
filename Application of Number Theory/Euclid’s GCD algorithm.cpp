//Author : Nahin the coder
//Date : 06 - 11 - 2021
#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b)
{
	if(a == 0)
	{
		return b;
	}
	else
	{
		return GCD(b%a,a);
	}
}



int main()
{
	  //we will find  greatest common divisor
	  int a = 15;
	  int b = 10;

    cout<<"\n\n";
    cout<<"Greatest Common Divisor of \n\n"<<a<<" and "<<b<<" is : ";
    
	  cout<<GCD(a,b);
    cout<<"\n\n";

    return 0;
}
