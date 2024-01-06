#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
        int arr1[n],arr2[n];
        int mid,p;

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        arr2[i]=arr1[i];

    }
    cin>>p;
    for(int i=0;i<n;i++)
    {
        if(p=arr1[i])
        {
            mid=i;
            break;
        }
    }
    
    for(int i=0;i<=mid;i++)
        arr2[i]=arr1[i+mid];
    for(int i=0;i<mid;i++)
        arr2[mid+i+1]=arr1[i];

    // int powsum=

    for(int i=0;i<n;i++)
    {
        cout<<arr2[i];
       // arr2[i]=arr1[i];

    }

}