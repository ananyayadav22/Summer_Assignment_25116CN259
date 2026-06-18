#include<iostream>
using namespace std;

int main(){
    int arr1[50][40];
    int row,col;
    cout<<"Enter the no. of input for row:";
    cin>>row;
    cout<<"Enter the no. of input for col:";
    cin>>col;

    for(int r1_index=0;r1_index<row;r1_index++){
        for(int c1_index=0;c1_index<col;c1_index++){ 
            cout<<"Enter the arr["<<r1_index<<"]["<<c1_index<<"]:";
            cin>>arr1[r1_index][c1_index];
        }
        cout<<endl; 
    }

    int arr2[50][40];
   
    for(int r1_index=0;r1_index<row;r1_index++){
        for(int c1_index=0;c1_index<col;c1_index++){ 
            cout<<"Enter the arr["<<r1_index<<"]["<<c1_index<<"]:";
            cin>>arr2[r1_index][c1_index];
        }
        cout<<endl; 
    }
    int arr3[50][40];

    cout<<"The sum of two matrix is: "<<endl;
    for(int r1_index=0;r1_index<row;r1_index++){
        for(int c1_index=0;c1_index<col;c1_index++){ 
            arr3[r1_index][c1_index]=arr1[r1_index][c1_index]+arr2[r1_index][c1_index];
            cout<<arr3[r1_index][c1_index]<<" ";
        }
        cout<<endl; 
    }    
}