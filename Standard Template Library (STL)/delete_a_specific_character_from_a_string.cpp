//Author : Nahin the Coder
//Date : 23-11-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);

   string str = "313331";
   cout<<"Before deleting the string is : "<<str<<"\n\n";

   str.erase(remove(str.begin(),str.end(),'3'),str.end());
   cout<<"After deleting the string is : ";
   
   cout<<str;
   return 0;
}
