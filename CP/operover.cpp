#include<bits/stdc++.h>
using namespace std;

class complex1
{
    private:
    int a,b;

    public:
    void set_data(int x )
    {
        a=x;
       // b=y;
    }
    void show_data()
    {
        cout<<a<<endl;
    }
    complex1 operator ++(int c)
    {
        complex1 temp;
        temp.a=c++;
       
        return temp;
    }
    complex1 operator ++()
    {
        complex1 temp;
        temp.a=++a;
       
        return temp;
    }
};

int main()
{
    complex1 c1,c2,c3,c4;
    c1.set_data(2); 
    //c2.set_data(4);
    c3=c1.operator ++();  
    c4=++c1;  
    c3.show_data(); 
    c4.show_data(); 

    return 0; 

    

}
