#include<bits/stdc++.h>
using namespace std;

void pattern(int lines = 5,int diff = 1){

 int start = 1,i,j;
    for(i=0;i<lines;i++){
            for(j=0;j<=i;j++){
                cout<<start<<" ";
                if(start+diff > 9){
                    start = 1;
                }
                else{
                    start +=diff;
                }
            }
            cout<<endl;
    }
}

int main(){

pattern();

pattern(4,2);

return 0;
}


