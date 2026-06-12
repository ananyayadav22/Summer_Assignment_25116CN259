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
    int c;
    for(int index=0;index<n/2;index++){
        c=arr[n-1-index];
        arr[n-1-index]=arr[index];
        arr[index]=c;
    }
    cout<<"Reversed array: ";
    for(int index=0;index<=n-1;index++){
        cout<<arr[index]<<" ";
    }
    return 0;
}