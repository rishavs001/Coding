#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,d,q;
    long long num;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        cin>>num;
    
    n=n-1;
    while(n>=0)
    {
        q=num/(pow(10,n));
        if(q>d)
            cout<<q;
        else
            {
                cout<<d<<q;
                d=-1;
            }
        num=num-(q*pow(10,n));
        n--;
    }
    
    cout<<endl;
    }
    return 0;
}