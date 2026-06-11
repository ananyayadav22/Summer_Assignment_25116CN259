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
    int search,duplicacy=0;
    cout<<"Enter the no. for which you want to find duplicacy :";
    cin>>search;
    for(int index=0;index<=n-1;index++){
        if(arr[index]==search){
        duplicacy++;
        }
    }
    cout<<"The duplicacy of searched no. is : "<<duplicacy<<endl;
    return 0;
}