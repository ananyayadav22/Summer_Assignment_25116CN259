#include<iostream>
using namespace std;

long long factorial(int n){
    int i=1;
    long long fact=1;
    while(i<=n){
        fact=fact*i;
        i++; 
    }     
 return fact;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The factorial of a no.is : "<<factorial(n);
    return 0;
}