#include <bits/stdc++.h>
using namespace std;
int main()
{   string s="";
    int n;
    cout<<"Enter the size of substring to print: ";
    cin>>n;
    try{
        if(s.size()<=0){
            throw("NULL String");
        }
    }
    catch(char const* s){
        cout<<"ERROR "<<s;
    }
    return 0;
}