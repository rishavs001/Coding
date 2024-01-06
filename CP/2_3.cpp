/*
 Write a C++ program with following inline function.
i. Verifying Ideal gas law (Chemistry)   -------->done
ii. To compute buoyant force using archimedes principle
iii. Final displacement using newton’s first law of motion
iv. To compute a XOR b
*/
#include<bits/stdc++.h>
using namespace std;
inline bool idl(int p,int v,int n,int r,int t)
{
    if((p*v)==(n*r*t))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int p,v,n,r,t;
    cout<<"Enter p v n r t: ";
    cin>>p>>v>>n>>r>>t;
    if(idl(p,v,n,r,t))
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }





    return 0;
}