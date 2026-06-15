#include<iostream>
using namespace std;

int main(){
    int n;
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
        int c=index;
        for(int i=index+1;i<n;i++){
            if(arr[i]<arr[c]){
                c=i;
            }
        }
        int temp=arr[index];
        arr[index]=arr[c];
        arr[c]=temp;
    }        
    cout<<endl;
    cout<<"Selection sort: ";
    for(int index=0;index<n;index++){
        cout<<arr[index]<<" ";
    }    
    return 0;
}