#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input;
    cout<<"Enter the string:";
    getline(cin,input);
    for(int i=0;i<input.size();i++){
        if(input[i]==' '){
            for(int j=i+1;j<=input.size();j++){
                input[j-1]=input[j];
            }
            input.pop_back();
        }
    }            
 cout<<input;                 
}                