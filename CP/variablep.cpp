// #include <cmath>
// #include <cstdio>
// #include <vector>
#include <iostream>
//#include <algorithm>
using namespace std;


int main() {
    int i,j,n,q,m,k,temp;
    cin >> n >> q;

    
    int *a[n];
    for (i=0;i<n;i++)
    {
        cin >> temp;
        a[i]=new int[temp];
        for (j=0;j<temp;j++)
    {
        cin >> a[i][j];
    }        
        
    }
    for(i=0;i<q;i++){
        cin >> m >> k;
        cout << a[m][k]<<endl;
    
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
