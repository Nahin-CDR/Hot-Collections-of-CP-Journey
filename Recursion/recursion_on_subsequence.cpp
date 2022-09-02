#include<bits/stdc++.h>
using namespace std;

int arr[3] = {3,2,1};

void ReF(int index,vector<int>&temp)
{
    if(index >= 3)
    {
        for(auto it : temp)
        {
            cout<<it<<" ";
        }
        if(temp.size() == 0)
        {
            cout<<"[]";
        }
        cout<<"\n";
        return;
    }
    temp.push_back(arr[index]);
    ReF(index+1,temp);
    temp.pop_back();
    //cout<<"index : "<<index<<"\n";
    ReF(index+1,temp);

}


int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    vector<int>temp;
    
    ReF(0,temp);

    return 0;
}
