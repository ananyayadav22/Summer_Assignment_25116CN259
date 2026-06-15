#include<iostream>
using namespace std;

int main(){
    int n,c,target;
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
            else
            continue;
        }
    }
    cout<<endl;
    cout<<"Sorted array: ";
    for(int index=0;index<n;index++){
        cout<<arr[index]<<" ";
    }    
    cout<<endl;
    cout<<"Enter the target :";
    cin>>target; 
    int l=0;
    int h=n-1;
    while(l<=h){
    int mid=(l+h)/2;
    if(arr[mid]==target){
        cout<<"Target found at index :"<<mid;
        return 0;
    }
    else if(target<arr[mid]){
        h=mid-1;
    }
    else{
        l=mid+1;
    } 
    }         
}