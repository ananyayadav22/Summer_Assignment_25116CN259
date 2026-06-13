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
    int k= 0;
    for(int index=0;index<n;index++){
        bool duplicate=false;
        
        for(int j=0;j<k;j++){
            if(arr[index]==arr[j]){
                duplicate=true;
                break;
            }
        }
        if(!duplicate){
            arr[k]=arr[index];
            k++;
        }
    }
    cout<<"Array after removing all duplicates: ";
    for(int index=0;index<k;index++){
        cout<<arr[index]<< " ";
    }
    cout<<endl;
}