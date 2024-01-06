//template <class type> typefunc_name(type arg1,.....)

#include<bits/stdc++.h>
using namespace std;

template <class X> 
X big(x a , X b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    cout<<big(4,5)<<endl;
    cout<<big(5.6,2.9);
    //return 0;
}
