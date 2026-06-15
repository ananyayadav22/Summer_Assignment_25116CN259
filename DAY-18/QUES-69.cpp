#include<iostream>
using namespace std;

int main(){
    int n,c;
    cout<<"Enter the no. of inputs for array:";
    cin>>n;
    int arr[n];
    for(int index=0;index<n;index++){
        cout<<"Enter the values for arr["<<index<<"]:";
    cin>>arr[index];
    }
    for(int index=0;index<n;index++){
        cout<<arr[index]<<" ";
    }
    for(int index=0;index<n;index++){
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                c=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=c;
            }
        }
    }        
    cout<<endl;
    cout<<"Bubble sort: ";
    for(int index=0;index<n;index++){
        cout<<arr[index]<<" ";
    }    
    return 0;
}