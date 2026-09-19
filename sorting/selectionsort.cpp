#include<bits/stdc++.h>
using namespace std;
void selectionsort(int  arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int min=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[min])
            min=j;//updating where min is actually present at 
            //if you do arr[min]=arr[j] arr[i] will be updated to js value nad org value is lost
        }
        swap(arr[i],arr[min]);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
    //printing out the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
