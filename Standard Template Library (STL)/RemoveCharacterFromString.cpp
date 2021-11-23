//Author : Nahin the Coder
//Date : 23-11-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
  

   int test;
   cin>>test;
   while(test--)
   {
      string s;
      cout<<"Enter the string : "; cin>>s;
      cout<<"\nEnter the character u wanna remove : "; char ch; cin>>ch;
      cout<<"\n\n";
      s.erase(remove(s.begin(),s.end(),ch),s.end());
      cout<<"After removing : "<<s<<endl;
   }
   return 0;
}
