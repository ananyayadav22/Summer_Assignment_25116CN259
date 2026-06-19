#include<iostream>
using namespace std;

int main(){
    int arr1[50][40];
    int n;
    cout<<"Enter the no. of inputs for row and col:";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){ 
            cout<<"Enter the arr["<<i<<"]["<<j<<"]:";
            cin>>arr1[i][j];
        }
        cout<<endl; 
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){ 
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl; 
    }    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr1[i][j]!=arr1[j][i]){ 
             cout<<"matrix is not symmetric";
             return 0;
            }
        }

    }
    cout<<"matrix is symmetric";
    return 0;    
}