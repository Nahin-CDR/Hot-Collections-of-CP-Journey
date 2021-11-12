
//Author : Nahin the Coder
//Date : 12-11-2021

#include <bits/stdc++.h>
using namespace std;




int BigMod(int base, int power, int mod)
{
   if(power == 0)
   {
      return 1;
   }
   else if(power % 2 == 1)
   {
      int a = base % mod;
      int b = (BigMod(base, power-1, mod))%mod;
      return (a*b) % mod;
   }
   else if(power % 2 == 0)
   {
      int a = (BigMod(base,power/2,mod))%mod;
      return (a*a)%mod;
   }
   else
   {
      return -1;
   }
}





int main() 
{
   // when we want to find 2^5%7 = ? then we need this 
  // a^b%n = ?
   
   int base,power,mod;
   cin>>base>>power>>mod;

   cout<<BigMod(base,power,mod)<<endl;
   

   return 0;
}
