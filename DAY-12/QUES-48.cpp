#include<iostream>
using namespace std;

bool perfect(int n){
int i,sum=0;
for(i=1;i<n;i++){
        if(n%i==0)
        sum=sum+i;   
}
return sum==n;
}

    int main(){
        int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(perfect(n)){
        cout<<("the no. is perfect");
    }
    else{
        cout<<("the no. is not a perfect no.");
    }    
    return 0;
    }
