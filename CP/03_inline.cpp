#include<bits/stdc++.h>
using namespace std;

inline bool ideal(float p,float v, float n,float r, float t){
    if((p*v)==(n*r*t)) return true;
    return false;
}
inline float buoyant(float row, float v2,float g){
    float Fb = (row*v2*g);
    return Fb;
}
inline int disp(int initial_pos,int final_pos){
    return final_pos-initial_pos;
}
inline int compute(int a,int b){
    return a^b;
}


int main(){

float p=2,v=8.3,n=1,t=2;
const float r = 8.3;
string check = "No";
if(ideal(p,v,n,r,t)){
    check = "Yes";
}
cout<<"Ideal Gas : "<<check<<endl;

float row=1.2,v2= 3.6,g=9.8;
cout<<"Buyont Force : "<<buoyant(row,v2,g)<<endl;

int initial_pos = 2,final_pos = 9;
cout<<"Displacement : "<<disp(initial_pos,final_pos)<<endl;

int a=5,b=6;
cout<<"a XOR b : "<<compute(a,b)<<endl;
}
