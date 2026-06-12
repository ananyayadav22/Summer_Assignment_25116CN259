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
    int c,k;
    cout<<"Enter the no. of shifts for array:";
    cin>>k;
    k=k%n;
    for(int shift=0;shift<k;shift++){
    c=arr[n-1];
    for(int index=n-1;index>0;index--){
        arr[index]=arr[index-1];
    }
        arr[0]=c;
    }    
    cout<<"Right rotated array: ";
    for(int index=0;index<=n-1;index++){
        cout<<arr[index]<<" ";
    }
    return 0;
}