#include<bits/stdc++.h>
using namespace std;
void mergesort(vector<int>&arr,int low,int high)
{
    //base case
    if(low>=high) return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void merge(vector<int>&arr,int low,int mid,int high)
{
    //temporary array
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    //if any sub array is exhausted , we will copy it
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;

    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;

    }
    //now the whole array would be sorted in temp
    //copy the temp to arr
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1); 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
