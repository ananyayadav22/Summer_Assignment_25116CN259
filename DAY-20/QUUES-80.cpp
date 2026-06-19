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

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl; 
    }
    
    for(int j=0;j<col;j++){
        int sum=0;
        for(int i=0;i<row;i++){
            sum=sum+arr1[i][j];
        }
    cout<<"Sum of col "<<j<<" is:"<<sum<<endl;             
    }
}