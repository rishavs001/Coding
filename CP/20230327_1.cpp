#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num,denom;
    cout<<"Enter the Numertaor: ";
    cin>>num;
    cout<<"Enter the Denomenator: ";
    cin>>denom;
    try{
        if(denom==0)
        throw("Zero in Denomenator");
        else if(denom>9999 && num<1)
        throw("Divide by very large Number");
        else if(denom<0 && -denom>99999 && num<1)
        throw("Divide by very large negative no.");
        else{
            float x=num/denom;
            cout<<x;
        }
       }
    catch(char const* s){
        cout<<"ERROR "<<s;
    }
    return 0;
}
