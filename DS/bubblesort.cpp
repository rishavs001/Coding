#Ascendingorder 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={15,16,6,8,5};
    int n=5,t,flag=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
            if(flag==0)
            {
            break;
            }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}