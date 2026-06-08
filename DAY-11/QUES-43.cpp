#include<iostream>
using namespace std;

int prime(int n){
    int count=0;
    for(int i=2;i<=n/2;i++){
        int rem=n%i;
        if(rem==0){
            count++;
        }
    }
    if(count==0){
        cout<<("the no. is prime");
    }
    else{
        cout<<("the no. is not prime");
    }   
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    prime(n);

    return 0;
}