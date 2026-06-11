#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of inputs for array:";
    cin>>n;
    int arr[n];
    for(int index=0;index<=n-1;index++){
        cout<<"Enter the values for arr["<<index<<"]:";
    cin>>arr[index];
    }
    for(int index=0;index<=n-1;index++){
        cout<<arr[index]<<" ";
    }
    cout<<endl;
    int search;
    cout<<"Enter the no. which you want to search in array:";
    cin>>search;
    for(int index=0;index<=n-1;index++){
        if(arr[index]==search){
        cout <<"Number:"<<search<<" found at index:"<<index<< endl;
        }   
    }
    cout<<"Number not found"<<endl; 
    return 0;
}