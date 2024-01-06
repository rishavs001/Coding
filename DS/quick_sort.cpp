#include<bits/stdc++.h>
using namespace std;

void qusort(int arr[], int l,int h)
{
    if(l<h){
    int pivot=partition(arr,l,h);

    partition(arr,l,pivot-1);
    partition(arr,pivot+1,h);
    }
}


int partition(int *arr,int l, int h)
{
   int  pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        while(arr[i]<=pivot)
            i++;
        while(arr[j]>pivot)
            j--;

        swap(arr[i],arr[j]);

    }
    swap(arr[l],arr[j]);
    return j;
    

   
}

int main()
{
    int arr[10]={7,4,88,5,6,12,15,32,51,41};
    int size=10,low=0;
    qusort(arr,low,size-1);
     cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}