#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,ml=0,c,i;
    cin>>n;
    long long arr[n];
    cin>>arrr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            count++;
            if(count>ml)
            ml=count;
        }
        else{
            count=0;
        }
    }
    cout<<ml;
    return 0;
}