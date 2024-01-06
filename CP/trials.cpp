#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c,count,diff,temp;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>a>>b>>c;
        while(a!=b)
        {
            if(a<b)
            {
                temp=a;
                a=b;
                b=temp;
            }
            diff=abs(a-b)/2;
            if(diff>=c)
            {
                a=a-c;
                b=b+c;
                count++;
            }
            else
            {
                a=a-diff;
                b=b+diff;
                count++;
            }
            
        }
        cout<<count<<endl;
    }
    
    return 0;
}