/*
Write a program in C++ to define a structure ‘product’ with data members :
productid and rating (in range 1 to 5). Input productid and rating for ‘n’ number of
products. Write a function to return the number of TOP rated, AVERAGE rated, and
LOW rated products using reference arguments, where criteria for each category is
given as follows:
i. TOP rated : rating >= 4
ii. AVERAGE rated : 3 <= rating < 4
iii. LOW rated : below 3
*/
#include<bits/stdc++.h>
using namespace std;

struct product{
    //private:
    int productid;
    double rating;
};
void rated(product *p,int n)
{
    int top=0,low=0,average=0;
    for(int i=0;i<n;i++)
    {
        if(p[i].rating>=4)
            top++;
        else if(p[i].rating>=3 )
            average++;
        else
            low++;
    }
    cout<<"\nTOP: "<<top;
    cout<<"\nAVERAGE: "<<average;
    cout<<"\nLOW: "<<low;
}

int main()
{
    int n;
    cout<<"Enter number of products: ";
    cin>>n;
    product p[n];
    //vector<product> p;
    //cout<<"Enter product id and rating";
    for(int i=0;i<n;i++)
    {
    cout<<"Enter product id and rating for product "<<i+1<<": ";
        cin>>p[i].productid>>p[i].rating;
    }

    rated(p,n);






    return 0;
}