#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the no. of inputs for 1st array:";
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
    cout<<"Enter the no. of inputs for 2nd array:";
    cin>>m;
    int brr[m];
    for(int i=0;i<=m-1;i++){
        cout<<"Enter the values for brr["<<i<<"]:";
    cin>>brr[i];
    }
    for(int i=0;i<=m-1;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    int k=0;
    for(int index=n;index<=m+n-1;index++){
        arr[index]=brr[k];
        k++;
    }    
    for(int index=0;index<=m+n-1;index++){
        cout<<arr[index]<<" ";
    }
}   