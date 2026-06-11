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
    int max=arr[0],secondmax=arr[0];
    for(int index=0;index<=n-1;index++){
        if(arr[index]>max){
        max=arr[index];
        }
    }
    for(int index=0;index<=n-1;index++){
        if(arr[index]>secondmax && arr[index]!=max){
        secondmax=arr[index];
        }
    }        
    cout<<"The second max no. of array is :"<<secondmax<<endl;  
    return 0;
}