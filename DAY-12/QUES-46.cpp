#include<iostream>
#include<cmath>
using namespace std;

bool armstrong(int n){
int n1,sum=0,count=0;

n1=n;
    while(n1>0){
        count++;
        n1=n1/10;
    }
n1=n;
while(n1>0){
        sum=sum+pow(n1%10,count);
        n1=n1/10;
    }
return sum==n;    
}

    int main(){
        int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(armstrong(n)){
        cout<<("the no. is armstrong");
    }
    else{
        cout<<("the no. is not armstrong");
    }    
    return 0;
    }
