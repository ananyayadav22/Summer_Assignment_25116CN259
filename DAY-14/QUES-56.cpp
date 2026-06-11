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
    cout<<"Enter the no. for which you want to check duplicacy :";
    cin>>search;
    for(int index=0;index<=n-1;index++){
        if(arr[index]==search){
        duplicacy++;
        }
    }
    if(duplicacy>=2){
         cout<<"The duplicacy of searched no. is present"<<endl;
    }
    else{
        cout<<"The duplicacy of searched no. is not present"<<endl;
    }
    return 0;
}