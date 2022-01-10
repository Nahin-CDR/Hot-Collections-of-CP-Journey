//Author : Nahin the Coder
//Date : 10-01-2022

#include<bits/stdc++.h>
using namespace std;


int main()
{
    // rotation of a vector
	vector<int> vc {1,2,3,4,5,6,7,8,9,10};
	cout<<"OLD VECTOR :\n";
	for(auto it:vc)
	{
		cout<<it<<" ";
	}
	cout<<"\n";
    
	rotate(vc.begin(),vc.begin()+3, vc.end());
	
	cout<<"NEW VECTOR :\n";
	for(auto it:vc)
	{
		cout<<it<<" ";
	}
	cout<<"\n";
    


	return 0;
}
