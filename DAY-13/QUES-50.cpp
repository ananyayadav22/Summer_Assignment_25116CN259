#include<iostream>
using namespace std;

int main(){
    int n,sum=0,avg;
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
     for(int index=0;index<=n-1;index++){
        sum=sum+arr[index];
        arr[index]++;
    }    
        cout<<"The sum of array is : "<<sum<<endl;
        avg=sum/n;
        cout<<"The average of array is : "<<avg;
return 0;
}