#include<bits/stdc++.h>
using namespace std;

int pattern(int l,int d)
{ int num=1;
   for(int i=1;i<=l;i++)
   {
       for(int j=0;j<i;j++)
       {
           if(num>9)
           {
               num=abs(10-num);
           }
           if(num==0)
           {
               num=1;
           }
           cout<<num<<" ";
           num+=d;
       }
       cout<<endl;
   }
}


int main()
{
    int lines=5,diff=1;
    cout<<"Enter lines and difference \n";
    cin>>lines>>diff;
    cout<<pattern(lines,diff);
    
    return 0;
}
