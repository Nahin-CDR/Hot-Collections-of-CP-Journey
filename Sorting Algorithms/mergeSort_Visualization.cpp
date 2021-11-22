//Author : Nahin the Coder
//Date : 22-11-2021


#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void Merge(int arr[],int startPoint, int midPoint,int endPoint)
{
    int firstArrCounter,SecondArrCounter;
    int tempArray[endPoint];
    firstArrCounter = startPoint;
    SecondArrCounter = midPoint+1;
    int i;
    for(i=firstArrCounter; firstArrCounter<=midPoint and SecondArrCounter<=endPoint; i++)
    {
        if(arr[firstArrCounter]<arr[SecondArrCounter])
        {
            tempArray[i] = arr[firstArrCounter++];
        }
        else
        {
            tempArray[i] = arr[SecondArrCounter++];
        }
    }

    while(firstArrCounter <= midPoint)
    {
        tempArray[i++] = arr[firstArrCounter++];
    }
    while(SecondArrCounter <= endPoint )
    {
        tempArray[i++] = arr[SecondArrCounter++];
    }

    for(i=startPoint; i<=endPoint; i++)
    {
        arr[i] = tempArray[i];
    }

}






void MergeSort(int arr[],int left,int right)
{
   if(left>=right)
   {
      return;
   }
   else
   {
      int mid = (left +right)/2;
      MergeSort(arr,left,mid);
      MergeSort(arr,mid+1,right);
      Merge(arr,left,mid,right);
       for(int i=left; i<=right; i++)
       {
          cout<<arr[i]<<" ";
       }
      cout<<"\n\n";
   }
}


int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   cout<<"\n\nMerge sort visualization of the process:\n\n";
   int arr[11] = {4,1,2,5,12,4,24,534,3,54,90};
   
   MergeSort(arr,0,11-1);
  


   return 0;
}

