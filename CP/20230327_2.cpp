#include <bits/stdc++.h>
using namespace std;
class Exception{
	string s;
	public:
		Exception(string a){
			s=a;
		}
		void print(){
		    cout<<s;
		}
};

int main()
{   int n,x;
    int a[4]={1,2,3,4};
    n=4;
    cout<<"Enter the index to access: ";
    cin>>x;
    x--;
    try{
        if(x>=n){
		Exception e("Out of Bound");
		throw e;
		}
        
        else{
            cout<<"Value is :"<<a[x];
        }
    }
    catch(Exception obj){
        obj.print();
    }
    return 0;
}