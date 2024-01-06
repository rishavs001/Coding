#include<bits/stdc++.h>
using namespace std;

int main()

{
    int arr[3]={6,1,5},ie=0,k=1,flag=0;
    while(k<=3){
        ie+=k;
    for(int i=0;i<3;i++)
    {
        ie+=arr[i];
        if(ie<=0)
        {
            break;
        }
        if(i==2 && ie>0)
        {
            cout<<k;
            flag=1;
            break;
        }
    }
    if(flag==1)
    break;
    k++;
    }
}