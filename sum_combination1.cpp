#include<bits/stdc++.h>
using namespace std;
void findcomb(int ind,vector<int>&a,int target,vector<int>&arr,vector<vector<int>>&ans)
{
     if(ind == a.size())
    {
        if(target == 0)
        {
            ans.push_back(arr);
            return;
        }
        else
            return;
    }
    if(a[ind]<=target)
    {
        arr.push_back(a[ind]);
        findcomb(ind,a,target-a[ind],arr,ans);
        arr.pop_back();
    }
    findcomb(ind+1,a,target,arr,ans);
}
int main()
{
    int n,target;
    cin>>n; //vector size
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; //vector input
    }
    cin>>target; //target sum
    vector<vector<int>>ans;
    vector<int>arr;
    findcomb(0,a,target,arr,ans);
    for(int k=0;k<ans.size();k++)
    {
        for(int j=0;j<ans[k].size();j++)
        {
            cout<<ans[k][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}










