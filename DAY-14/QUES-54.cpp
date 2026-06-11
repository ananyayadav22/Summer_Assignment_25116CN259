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
    int search,frequency=0;
    cout<<"Enter the no. for which you want to search frequency :";
    cin>>search;
    for(int index=0;index<=n-1;index++){
        if(arr[index]==search){
        frequency++;
        }
    }
    cout<<"The frequency of searched no. is : "<<frequency<<endl;    
    return 0;
}