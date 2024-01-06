#include<bits/stdc++.h>
using namespace std;
struct product{
    long long pid;
    string pname;
    double cdp;
    long double plp;
    long double userrate;
    void input_data()
    {   
    cout<<"Enter pid, pname, cdp, plp, user rating \n";
    cin>>pid>>pname>>cdp>>plp>>userrate;
    }
   void output_data()
    {
    cout<<"PRODUCT ID :  "<<pid;
    cout<<"\nPRODUCT NAME : "<<pname;
    cout<<"\nCURRENT DISCOUNT PERCENTAGE : "<<cdp;
    cout<<"\nPRODUCT LABEL PRICE :  "<<plp;
    cout<<"\nUSER RATING : "<<userrate;

    printf("\n");
    }
    void computeSalesPrice()
    {
        double sgst=0.18*plp-(cdp*(plp/100)),cgst=0.18*plp-(cdp*(plp/100));
        long double sp;
        sp=plp-(cdp*(plp/100))+sgst+cgst;
        cout<<sgst<<endl<<cgst<<endl;
        cout<<"SALES PRICE: "<<sp;
    }   
};


int main()
{
    product arr[5];
    for(int i=0;i<5;i++)
    {
    cout<<"Details for product "<<i+1<<"\n   ";
    arr[i].input_data();
    arr[i].output_data();
    arr[i].computeSalesPrice();
    cout<<endl<<endl;
    }
    
    return 0;
}