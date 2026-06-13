#include<iostream>
using namespace std;

int main(){
    int n,sum;
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
    cout<<"Enter the sum you want:";
    cin>>sum;
    for(int index=0;index<=n-1;index++){
        for(int j=0;j<=n-1;j++){
            if(arr[index]+arr[j]==sum){
                cout<<"arr["<<index<<"]+"<<"arr["<<j<<"]= "<<sum<<endl;
            }
        }
    }    
}    