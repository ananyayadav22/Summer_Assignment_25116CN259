#include<iostream>
using namespace std;

int main(){
    int arr1[50][40];
    int row,col;
    cout<<"Enter the no. of inputs for row:";
    cin>>row;
    cout<<"Enter the no. of inputs for col:";
    cin>>col;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
            cout<<"Enter the arr["<<i<<"]["<<j<<"]:";
            cin>>arr1[i][j];
        }
        cout<<endl; 
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl; 
    }    

    int arr2[50][40];

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
             arr2[j][i]=arr1[i][j];
        }
        cout<<endl; 
    }  
    cout<<"The transpose of matrix is: "<<endl;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){ 
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl; 
    }  
}