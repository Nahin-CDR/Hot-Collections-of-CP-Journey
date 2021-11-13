//Author : Nahin the coder
//Date : 13-11-2021

#include<bits/stdc++.h>
using namespace std;


int BigMod(int base,int power,int mod)
{
    if(power == 0)
    {
        return 1;
    }
    else if(power % 2 == 1) // when power is ODD
    {
        int a = base%mod;
        int b = ( BigMod(base,power-1,mod) )%mod;
        return (a*b)%mod;
    }
    else // when power is even
    {
        int a = (BigMod(base,power/2,mod))%mod;
        return (a*a)%mod;
    }
}




int main()
{
    cout<<"\n\nWelcome MASTER!\n\n";

    int base,power,mod;
    cout<<"Enter base : "; cin>>base;
    cout<<"\nEnter Power : "; cin>>power;
    cout<<"\nEnter mod : ";cin>>mod;


    cout<<"\n\n"<<"("<<base<<"^"<<power<<")%"<<mod<<" = "<<BigMod(base,power,mod)<<endl;



    return 0;
}
