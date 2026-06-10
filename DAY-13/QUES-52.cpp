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
    int even=0,odd=0;
     for(int index=0;index<=n-1;index++){
        if(arr[index]%2==0){
            even++;
        }
        else{
            odd++;
        } 
     }
     cout<<"Total count of Even no. of array : "<<even<<endl; 
     cout<<"Total count of Odd no. of array : "<<odd; 
return 0;
}