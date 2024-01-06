#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    int arr[10]={7,4,88,5,6,12,5,32,51,4};
    for(i=0;i<10;i++)
    {   
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter element to find:";
    cin>>n;
    for(i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            cout<<"Element found at index "<< i;
            break;
        }
        else if(i==9 && arr[i]!=n)
        {
            cout<<"Element not found";
        }
    }

    return 0;
}