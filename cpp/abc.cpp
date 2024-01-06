#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        string arr;
        for(int i=0;i<10;i++)
        {
            cin>>arr;
            for(int i=0;i<10;i++)
            {
                if(arr[i]=='X')
                {
                    if(i<4)
                    {
                        count+=i+1;
                    }
                    else if(i==5)
                    {
                        count+=5;
                    }
                    else
                    {
                        count+=10-i;
                    }
                    // break;
                    
                }
            }
            
        }
        cout<<count<<endl;
        
        
        
        
    }
    
    return 0;
}