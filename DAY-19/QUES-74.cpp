#include<iostream>
using namespace std;

int main(){
    int arr1[50][40];
    int row,col;
    cout<<"Enter the no. of input for row:";
    cin>>row;
    cout<<"Enter the no. of input for col:";
    cin>>col;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
            cout<<"Enter the arr["<<i<<"]["<<j<<"]:";
            cin>>arr1[i][j];
        }
        cout<<endl; 
    }

    int arr2[50][40];
   
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
            cout<<"Enter the arr["<<i<<"]["<<j<<"]:";
            cin>>arr2[i][j];
        }
        cout<<endl; 
    }
    int arr3[50][40];

    cout<<"The subtraction of two matrix is: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
            arr3[i][j]=arr1[i][j]-arr2[i][j];
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl; 
    }    
}