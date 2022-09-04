#include<bits/stdc++.h>
using namespace std;



void printS(int index, int n,vector<int>&ds,int arr[],int sum,int currentSum)
{
	if(index == n)
	{
		if(currentSum == sum)
		{
			cout<<"currentSum : "<<currentSum<<endl;
			for(auto it : ds)
			{
				cout<<it<<" ";
			}
			cout<<"\n";
		}
		return;
	}
	currentSum += arr[index];
	ds.push_back(arr[index]);

	printS(index+1,n,ds,arr,sum,currentSum);

	currentSum -= arr[index];

	ds.pop_back();
	
	printS(index+1,n,ds,arr,sum,currentSum);
}


int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
	int n = 3;
	int arr[3] = {1,2,1};
	vector<int>ds;
	int sum = 2;
	int initSum = 0;
	printS(0,n,ds,arr,sum,initSum);


	return 0;
}
