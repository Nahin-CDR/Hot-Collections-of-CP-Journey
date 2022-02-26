//Author : Nahin the Coder
//Date : 28-2-2022

#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n = 10;
    int A[n] = {1,2,3,4,5,6,7,8,9,10};
    int x = 3;
    auto it = find(A,A+n,x); //search x from first to last of my array

    if(it != A+n)
    {
        //if my element is found       
        cout<<"My element index : "<<distance(A,it);
    }
    else
    {
        cout<<"Element is not found in the array !";
    }

 

    return 0;

}
