#include<iostream>
using namespace std;

int sum(int a , int b){
    int c=a+b;
    return c;
}

int main(){
    int a;
    cout<<"Enter first no. : ";
    cin>>a;
    int b;
    cout<<"Enter second no. : ";
    cin>>b;
    cout<<"The sum is : "<<sum(a,b);

    return 0;
}