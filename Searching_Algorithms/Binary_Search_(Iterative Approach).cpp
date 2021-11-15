//Author : Nahin the Coder
//Date : 15-11-2021

#include <bits/stdc++.h>
using namespace std;


// Iterative Approach

int Iterative_BinarySearch(int arr[],int left,int right,int item)
{
   
   while(left <= right)
   {
      int mid = (left+right)/2;

      if(arr[mid] == item)
      {
         return mid;
      }
      else if(arr[mid] > item)
      {
         left = 0;
         right = mid-1;
      }
      else
      {
         left = mid+1;
      }
   }
   return -1;
}





int main() 
{

   ios::sync_with_stdio(false);
   cin.tie(0);

   int arr[10] = {1,2,3,4,5,6,7,8,9,10};

   int item = 9;

   int result = Iterative_BinarySearch(arr,0,10,item);
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
