#include<bits/stdc++.h>
using namespace std;

void binary(int num)
{
string str1,str2;
while(num){
    int rem = num%2;
    str1+=rem+'0';
    num/=2;
}
int t = str1.length();
for(int i=t;i>=0;i--){
    str2+=str1[i];
}
cout<<str2;
}

int main(){

int num;
cout<<" Enter a number :";
cin>>num;
binary(num);

return 0;
}
