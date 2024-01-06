#include<bits/stdc++.h>
using namespace std;

void selsort(int *arr,int n)
{
    int j,min;   
    for(int i=0;i<n;i++)
    {
       // int j=i;
       min=i;
        for(j=i+1;j<n;j++)
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
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10]={7,4,88,5,6,12,15,32,51,415};
    int size=10;
    selsort(arr,size);

    return 0;
}