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
    int max=arr[0],min=arr[0];
    for(int index=0;index<=n-1;index++){
        if(arr[index]>max){
        max=arr[index];
        }
        if(arr[index]<min){
        min=arr[index];
        }
    }    
    cout<<"The max no. of array is :"<<max<<endl; 
    cout<<"The min no. of array is :"<<min;  
    return 0;
}