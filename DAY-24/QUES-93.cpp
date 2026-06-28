#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int count=0;
    string input;
    cout<<"Enter the string:";
    getline(cin,input);
    string rotation;
    cout<<"Enter the string you want find if rotation:";
    getline(cin,rotation);
    input=input+input;
    int j=input.find(rotation);
    if(j==string::npos){
        cout<<"No rotation";
    }
    else{
        cout<<"Rotation";
    }
}      