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
    cout<<"Length of string is:"<<i;
    return 0;
}