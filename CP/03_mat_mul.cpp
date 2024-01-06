#include<bits/stdc++.h>
using namespace std;

int main(){

int row1,row2,col1,col2;

cout<<"Enter row & column of first array : ";
cin>>row1>>col1;

int **a, **b;
int x;

a = new int*[row1];
b = new int*[row2];

cout<<"Enter "<< row1*col1<<" elements in first array: ";
for(int i=0;i<row1;i++){
    a[i]= new int [row1];
    for(int j=0;j<col1;j++){
            cin>>x;
        a[i][j] = x;
    }
}
for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
      cout<<setw(3)<<a[i][j];
    }
    cout<<endl;
}
cout<<"Enter row & column of second array : ";
cin>>row2>>col2;

cout<<"Enter "<< row2*col2<<" elements in second array: ";
for(int i=0;i<row2;i++){
    b[i]= new int [row2];
    for(int j=0;j<col2;j++){
            cin>>x;
        b[i][j] = x;
    }
}
for(int i=0;i<row2;i++){
    for(int j=0;j<col2;j++){
      cout<<setw(3)<<b[i][j];
    }
    cout<<endl;
}

if (col1!=row2)
    {
        cout << "Column of first matrix is not equal to Row of second.";

    }
    else{
        int **mul;

        for(int i = 0; i < row1; ++i){
        mul[i]= new int [row1];
        for(int j = 0; j < col2; ++j)
        {
            mul[i][j]=0;
        }}


 // Multiply matrix a and b and storing in array mult.
    for(int i = 0; i < row1; ++i)
        for(int j = 0; j < col2; ++j)
            for(int k = 0; k < col1; ++k)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }

    // Display the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < row1; ++i)
    for(int j = 0; j < col2; ++j)
    {
        cout << " " << mul[i][j];
        if(j == col2-1)
            cout << endl;
    }
    for(int i=0;i<row1;i++){
    delete []mul[i];
}
delete mul;
    }

for(int i=0;i<row1;i++){
    delete []a[i];
}
delete a;

for(int i=0;i<row2;i++){
    delete []b[i];
}
delete b;

return 0;
}
