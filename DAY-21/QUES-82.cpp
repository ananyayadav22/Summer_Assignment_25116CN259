#include<iostream>
using namespace std;

int main(){
    int i=0;
    char string[40];
    cout<<"Enter the string:";
    cin>>string;
    while(string[i]!='\0'){
        i++;
    }
    cout<<"Reversed string is:";
    for(int j=i-1;j>=0;j--){
        cout<<string[j];
    }
    cout<<endl;
    return 0;
}
