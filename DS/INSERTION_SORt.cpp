#include<bits/stdc++.h>
using namespace std;
void insort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j]<=arr[i-1])
        {
            if(arr[j]<=arr[j-1])
               { swap(arr[j],arr[j-1]);
                j--;
               }
            else
                break;
            //j--;
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
    insort(arr,size);

    return 0;
}