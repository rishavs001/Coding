#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,size=10,mid,flag=0;
    int start=0,end=size-1;
    int arr[10]={4,8,9,10,15,16,19,21,41,54};
    for(int i=0; i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter number to find: ";
    cin>>n;
    
    while(start<=end)
    {
        mid=(mid+end)/2;
        if(n==arr[mid])
        {
            cout<<"Element found at index: "<<mid;
            flag=1;
            break;
        }
        else if(n>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }

    }
        if(flag==0)
        {
            cout<<"Element not found";
        }
        

    return 0;
}