#include<bits/stdc++.h>
using namespace std;
 int part(vector<int>&arr,int low,int high)
 {
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot &&i<high)
        {
            i++;
        }
        while(arr[j]>pivot && j>low)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
        swap(arr[low],arr[j]);

    return j;
}
void quicksort(vector<int>&arr,int low,int high)
{
    if(low<high)
    {
        int pi=part(arr,low,high); //partition index , right place for piviot
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
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
    quicksort(arr,0,n-1); 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
