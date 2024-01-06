#include<bits/stdc++.h>
using namespace std;

void insort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(arr[j]<arr[j-1] && j>0)
        {
            if(arr[j]<arr[j-1])
                swap(arr[j],arr[j-1]);
            else
                break;
            
            j--;
        }
    }
    cout<<"";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n,i;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    
    
    insort(arr,n);
    
    
    return 0;
}