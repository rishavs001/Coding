#include<bits/stdc++.h>
using namespace std;

float plusoverloaded(float a,float b){
    return a+b;
}
string plusoverloaded(string a,string b){
    return a+b;
}
void plusoverloaded(int *arr,int size,int add){
    for(int i=0;i<size;i++){
        cout<<*(arr+i)+add<<" ";
    }
    cout<<endl;
}
void plusoverloaded(int *arr,int size1,int *arr2, int size2){
    int max_size = size1+size2;
    int arr3[max_size];
    int start = 0;
    for(int i=0;i<size1;i++){
        int size3 = sizeof(arr3)/sizeof(int);
        int flag = 0;
        for(int j=0;j<size3;j++){
            if(arr3[j]==arr[i]){
                flag =1;
            }
        }
        if(flag==0){
            arr3[start]=arr[i];
            start++;
        }
    }
    for(int i=0;i<size2;i++){
        int size3 = sizeof(arr3)/sizeof(int);
        int flag = 0;
        for(int j=0;j<size3;j++){
            if(arr3[j]==arr2[i]){
                flag =1;
            }
        }
        if(flag==0){
            arr3[start]=arr2[i];
            start++;
        }
    }
    for(int i=0;i<start;i++){
        cout<<*(arr3+i)<<" ";
    }
}

int main(){

    float num1 =3.52,num2 =7.83;
    cout<<plusoverloaded(num1,num2)<<endl;

    string str1 ="abcd",str2 ="fghj";
    cout<<plusoverloaded(str1,str2)<<endl;

    int arr []= {5,6,7,5,9};
    int add = 5;
    plusoverloaded(arr,sizeof(arr)/sizeof(int),add);

    int arr2[]={5,6,10,11,7,15};
    plusoverloaded(arr,sizeof(arr)/sizeof(int),arr2,sizeof(arr2)/sizeof(int));
}
