//Author : Nahin
//Date : 18-11-2021

#include<bits/stdc++.h>
using namespace std;


//this program will find the first less than number of what you given ;
//suppose u give it 6 then it will return u 5 which means the very first less than number of given number


multiset<int>::iterator FirstLessThan
(multiset<int>ml,int value)
{
    auto it = ml.lower_bound(value);
    if(it == ml.end())
    {
        --it;
    }
    while(it != ml.begin() and *it >=value)
    {
        --it;
    }
    return *it >= value ? ml.end() : it;
}

int main()
{

    multiset<int>ml = {1,23,4,4,5,5,6,6,7,87};

    auto it =  FirstLessThan(ml,7);
    cout<<(it == ml.end() ? "NO FOUND":to_string(*it))<<endl;



    return 0;
}
