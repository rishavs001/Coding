//DEscending Order
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={15,16,6,8,5};
    int n=5,min;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            if(i!=min)
            {
                swap(arr[i],arr[min]);
            }
        }
            
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}