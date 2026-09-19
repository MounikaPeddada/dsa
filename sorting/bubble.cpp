#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int didswap=0;
        for (int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
        }
        if(didswap=0)
        {
            return;//can use break also
            //return can be used here if no further printing lines or loops to execute
        }
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
    bubble(arr,n);
    //printing out the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
