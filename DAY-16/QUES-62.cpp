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
    int max=0, maxelement;
    for(int index=0;index<=n-1;index++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[index]==arr[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            maxelement=arr[index];
        }    
    }
    cout<<"The maximum frequency no. is : "<<maxelement<<endl;    
    return 0;
}