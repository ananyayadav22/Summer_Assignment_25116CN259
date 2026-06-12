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
    int count=0;
    for(int index=0;index<=n-1;index++){
        if(arr[index]!=0){
            arr[count]=arr[index];
            count++;
        }
    }
    for(int index=count;index<=n-1;index++){
        arr[index]=0;
    }
    cout<<"Array after moving zeros: ";
    for(int index=0;index<=n-1;index++){
        cout<<arr[index]<<" ";
    }
    return 0;
}