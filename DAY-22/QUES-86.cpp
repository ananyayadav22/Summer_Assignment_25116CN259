#include<iostream>
using namespace std;

int main(){
    int count=0;
    string input;
    cout<<"Enter the string:";
    getline(cin,input);
    for(int i=0;i<input.size();i++){
        if(input[i]==' '){
            count++;
        }
    }
    count++;
    cout<<"Words in the sentence are: "<<count;
}        