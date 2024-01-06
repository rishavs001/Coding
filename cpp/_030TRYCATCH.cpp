// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int x,y;
//     cin>>x>>y;
//     try{
//         if(x==0)
//         throw 0;
//          if (y==1)
//         throw 1;
//         cout<<x<<" "<<y;
//     }
//     catch(int i)
//     {
//         if(i==0)
//             cout<<"X=0\n";
//         if(i==1)
//         cout<<"Y=1\n";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    try{
        for(int i=1;i<10;i++)
        {
            if(i==4)
                throw i;
            cout<<i<<" ";
        }
        
    }
    catch(int i)
    {
        
        cout<<"i is "<<i;
    }
    return 0;
}