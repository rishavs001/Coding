#include<bits/stdc++.h>
using namespace std;
struct KYC{
    string name;
    string dob;
    string pan;
    string adhaar;
    string address;
    long int income;
    long int saving;
    void input_data()
    {   
    cout<<"Enter NAME, DOB(YYYYMMDD), PAN, ADHAAR, ADDRESS, INCOME, SAVINGS \n";
    cin>>name>>dob>>pan>>adhaar;
    cin>>address;
    cin>>income>>saving;
    }
   void output_data()
    {
        cout<<"NAME :  "<<name;
    cout<<"DOB :  "<<dob;
    cout<<"\nPAN : "<<pan;
    cout<<"\nADHAAR : "<<adhaar;
    cout<<"\nADDRESS :  "<<address;
    cout<<"\nINCOME : "<<income;
    cout<<"\nSAVING : "<<saving;
   
    printf("\n");
    }
    void computeIncomeTax()
    {
        long double tax;
        if(income<=500000)
        {
            tax=0;
        }
        else if(income<=1000000)
        {
            tax=0.10*(income-saving);
            if(tax>150000)
            {
                tax=150000;
            }
        }
        else
        {
            tax=0.20*(income-saving);
            if(tax>150000)
            {
                tax=150000;
            }
        }
        cout<<"TAX: "<<tax;
    }  
};


int main()
{
    KYC arr[7];
    for(int i=0;i<7;i++)
    {
    cout<<"Details for person "<<i+1<<"\n   ";
    arr[i].input_data();
    arr[i].output_data();
    arr[i].computeIncomeTax();
    cout<<endl<<endl;
    }
    
    return 0;
}