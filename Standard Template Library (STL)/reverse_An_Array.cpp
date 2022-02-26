//Author : Nahin the Coder
//Date : 28-2-2022

#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n = 10;
    int A[n] = {1,2,3,4,5,6,7,8,9,10};
    reverse(A+1,A+9);
    for(int i:A)
    {
        cout<<i<<" ";
    }
   

 

    return 0;

}
