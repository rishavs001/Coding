/*
Write a function in C++ to print the following pattern by taking number of lines, and 
difference as parameters with default arguments.
no. of lines =5, difference =1
1
2 3
4 5 6
7 8 9 1
2 3 4 5 6
no. of lines =4, difference =2
1
3 5
7 9 1
3 5 7 9
i. The default value of number of lines is 5
ii. The default value of difference is 1
*/



#include<bits/stdc++.h>
using namespace std;
void pattern(int n=5,int d=1)
{
    int i,j,k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(k>9)
                {
                    k=1;
                }
            cout<<k<<" ";
            k+=d;
        }
        cout<<endl;
    }

}

int main()
{
    int n,d;
    cout<<"Enter n and d: ";
    cin>>n>>d;
    pattern(n,d);
    pattern();
    return 0;
}