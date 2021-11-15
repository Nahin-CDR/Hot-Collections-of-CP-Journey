//Author : Nahin the Coder
//Date : 15-11-2021

#include <bits/stdc++.h>
using namespace std;


 

int Linear_Search(int arr[],int n,int item)
{
   for(int i = 0; i < n; i++)
   {
      if(item == arr[i])
      {
         return i;
      }
   }
   return -1;
}







int main() 
{

   ios::sync_with_stdio(false);
   cin.tie(0);

   cout<<"\n\n TIME COMPLEXITY of linear search is O(n)"<<"\n\n";
   
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};

   int item = 9;

   int result = Linear_Search(arr,10,item);
   if(result != -1)
   {
      cout<<item<<" is found at index no : "<<result<<endl;
   }
   else
   {
      cout<<"Item is not found !"<<endl;
   }



   return 0;
}
