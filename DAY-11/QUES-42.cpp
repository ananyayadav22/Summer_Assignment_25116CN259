#include<iostream>
using namespace std;

int max(int n){
    int maxdigit=0;
    while(n>0){
        int c=n%10;
        if(c>maxdigit){
             maxdigit=c;
        }    
        n=n/10; 
    }     
 return maxdigit;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The max no.is : "<<max(n);

    return 0;
}