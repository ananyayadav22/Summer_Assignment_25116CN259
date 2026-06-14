#include<iostream>
using namespace std;

int main(){
    int n,m,crr[50];
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
    for(int index=0;index<=n-1;index++){
        bool duplicate=true;
        for(int j=0;j<m;j++){
            if(arr[index]==brr[j]){
                duplicate=false;
                break;
            }
        }
        if(!duplicate){
            crr[k]=arr[index];
            k++;
        }
    }
    cout<<"the common elements are :"<<endl;    
    for(int i=0;i<=k-1;i++){
        cout<<crr[i]<<" ";
    }
}   