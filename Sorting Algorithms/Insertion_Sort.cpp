//Author : Nahin
//Date : 18-11-2021

#include<bits/stdc++.h>
using namespace std;



void InsertionSort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int item = arr[i];
        int j = i-1;
        while(j >= 0 and item<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = item;
    }
}



int main()
{
    int arr[4] = {2,3,4,1};

    InsertionSort(arr,4);

    for(int i=0; i<4; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
