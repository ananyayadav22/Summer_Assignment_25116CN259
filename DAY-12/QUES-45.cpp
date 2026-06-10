#include<iostream>
using namespace std;

bool palindrome(int n){
int n1,rem,rev=0;
n1=n;

 while(n>0){
        rev=rev*10+(n%10);
        n=n/10;
    }
return rev==n1;    
}

    int main(){
        int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(palindrome(n)){
        cout<<("the no. is palindrome");
    }
    else{
        cout<<("the no. is not palindrome");
    }    
    return 0;
    }
