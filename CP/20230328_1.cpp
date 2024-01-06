#include<bits/stdc++.h>
using namespace std;

void bsearch(int *arr,int n,int num)
{
    int low=0,mid,high=n-1,flag=0;
    while(low<=high)
    {
    mid=(low+high)/2;
    //cout<<*arr+mid<<"  ";
    if(num==(*(arr+mid)))
    {
        cout<<"Element found at index "<<mid;
        flag=1;
        return;
    }
    else if(num>(*(arr+mid)))
        low=mid+1;
    else{
            high=mid-1;
        }
    }
    if(flag==0)
        cout<<"Element not found";
}

int main()
{
    int n,i,num;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Enter number to find: ";
    cin>>num;
    
    bsearch(arr,n,num);
    
    
    return 0;
}