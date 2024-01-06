#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,numb,d1,q;
    string y,s,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        cin>>s;
        y=s;
    for(int i=0;i<=n;i++)
    {
       s.insert(i,d);
       if((y.compare(s))<0)
        
            y=s;
            s.erase(s.begin()+i);
    }
    cout<<y<<endl;
    }
    return 0;
}