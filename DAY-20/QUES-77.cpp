#include<iostream>
using namespace std;

int main(){
    int arr1[50][40];
    int r,n,c;
    cout<<"Enter the no. of inputs for row of first matrix:";
    cin>>r;
    cout<<"Enter the no. of inputs for col of first matrix and row of second matrix:";
    cin>>n;
    cout<<"Enter the no. of inputs for col of second matrix:";
    cin>>c;

    for(int i=0;i<r;i++){
        for(int j=0;j<n;j++){ 
            cout<<"Enter the arr["<<i<<"]["<<j<<"]:";
            cin>>arr1[i][j];
        }
        cout<<endl; 
    }
    cout<<"The first matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<n;j++){ 
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl; 
    }    

    int arr2[50][40];
   
    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){ 
            cout<<"Enter the arr["<<i<<"]["<<j<<"]:";
            cin>>arr2[i][j];
        }
        cout<<endl; 
    }
    cout<<"The second matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){ 
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl; 
    }

    int arr3[50][40];
    
    cout<<"The multiplication of two matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){ 
            arr3[i][j]=0;
            for(int k=0;k<n;k++){ 
            arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
            }
            cout<<arr3[i][j]<<" ";    
        }
        cout<<endl; 
    }    
}