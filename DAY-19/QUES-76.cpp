#include<iostream>
using namespace std;

int main(){
    int arr[50][40];
    int row,col;
    cout<<"Enter the no. of inputs for row:";
    cin>>row;
    cout<<"Enter the no. of inputs for col:";
    cin>>col;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
            cout<<"Enter the arr["<<i<<"]["<<j<<"]:";
            cin>>arr[i][j];
        }
        cout<<endl; 
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }    

    int sum=0;

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){ 
             sum=sum+arr[i][j];
            } 
        }
    }
    cout<<"The sum of diagonal elements of matrix is:"<<sum;  
}