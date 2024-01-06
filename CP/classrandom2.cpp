#include <bits/stdc++.h>
using namespace std;
class Fraction {
private:
    int num,denom;
public:
    Fraction();
    Fraction(int n,int dn);
    ~Fraction();
    void getFraction();
    void setFraction(int n,int dn);
    void addFraction(Fraction a,Fraction b);
    void reduceFraction(Fraction a);
    int divFraction(Fraction n,Fraction dn);
};

Fraction::Fraction() {
    num = 0;
    denom=0;
}

Fraction::Fraction(int n, int dn) {
    num = n,denom=dn;
}

Fraction::~Fraction() {
    std::cout << "Object destroyed for class Fraction" << std::endl;
}

void Fraction::getFraction() {
    cout<<num<<"/"<<denom<<endl<<"---------------"<<endl;
}

void Fraction::setFraction(int n,int dn)
{
    num=n;
    denom=dn;

}
void Fraction:: addFraction(Fraction a,Fraction b)
{
    num=(a.num*b.denom)+(a.denom*b.num);
   denom=a.denom*b.denom;
}
void Fraction:: reduceFraction(Fraction a)
{
    int n=num=a.num;
    int d=denom=a.denom;
    int mini=min(num,denom);
    int maxi=max(num,denom);
    int quo,rem=1;
    while(rem!=0)
    {
        rem=maxi%mini;
        quo=maxi/mini;
        maxi=mini;
        mini=rem;    
    }
    num/=quo;
    denom/=quo;

}
int Fraction:: divFraction(Fraction a,Fraction b)
{
   num=a.num*b.denom;
   denom=b.num*a.denom;
}


int main()
{
    cout<<"Enter number and denominator: ";
    int n,denom;
    int a,b;
    cin>>n>>denom;
        cout<<"Enter number and denominator: ";

    cin>>a>>b;
    
    Fraction f1(n,denom),f2(a,b),f3,f4,f5;
    f3.addFraction(f1,f2);
        f3.getFraction();
    f3.divFraction(f1,f2);
        f3.getFraction();
    f4.reduceFraction(f3);
        f4.getFraction();
    f5.setFraction(a,b);
        f5.getFraction();

    return 0;
}
