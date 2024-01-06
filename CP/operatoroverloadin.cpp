#include<bits/stdc++.h>
using namespace std;

class complex1
{
    private:
    int a,b;

    public:
    void set_data(int x ,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<a<<" "<<b;
    }
    complex1 operator +(complex1 c)
    {
        complex1 temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    complex1 operator -()
    {
        complex1 temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
};

int main()
{
    complex1 c1,c2,c3,c4;
    c1.set_data(2,5); 
    c2.set_data(4,8);
    c3=c1.operator +(c2);  
    c4=-c3;  
    c3.show_data(); 
    c4.show_data(); 

    return 0; 

    

}
