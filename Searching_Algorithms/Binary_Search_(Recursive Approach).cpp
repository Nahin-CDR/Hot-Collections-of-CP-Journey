//Author : Nahin the Coder
//Date : 15-11-2021

#include <bits/stdc++.h>
using namespace std;


//Recursive Approach 

int Recursive_BinarySearch(int arr[],int left, int right, int item)
{
   
   if(left<=right)
   {
      int mid = (left + right)/2;
      if(arr[mid] == item)
      {
         return mid;
      }
      else if(arr[mid] > item)
      {
         return Recursive_BinarySearch(arr,left,mid-1,item);
      }
      else
      {
         return Recursive_BinarySearch(arr,mid+1,right,item);
      }
   }
   else
   {
      return -1;
   }
  

}



// Driver Program

int main() 
{

   ios::sync_with_stdio(false);
   cin.tie(0);

   int arr[10] = {1,2,3,4,5,6,7,8,9,10};

   int item = 9;

   int result = Recursive_BinarySearch(arr,0,10,item);
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
