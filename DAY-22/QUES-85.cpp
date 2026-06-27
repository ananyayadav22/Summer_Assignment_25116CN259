#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input;
    cout<<"Enter the string:";
    getline(cin,input);
    string b=input;
     reverse(b.begin(),b.end());
     if(b==input){
        cout<<"String is palindrome.";
     }
     else{
        cout<<"String is not palindrome.";
     }
}      