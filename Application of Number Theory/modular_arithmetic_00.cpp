
//Author : Nahin the Coder
//Date : 12-11-2021

#include <bits/stdc++.h>
using namespace std;



int main() 
{
   // when we want to find n!%something = ? then we need this 
   int n; cin>>n;
   int m; cin>>m;

   int fact = 1;
   for(int i=1; i<=n; i++)
   {
      fact = ( (fact%m) * (i%m) )%m; // (1*2*3*4*5)%7
   }
   cout<<fact<<endl;

   return 0;
}
