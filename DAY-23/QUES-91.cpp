#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input1;
    cout<<"Enter the string 1:";
    getline(cin,input1);
    for(int i=0;i<input1.size();i++){
     char c=input1[i];
      if(c>='A' && c<='Z'){
        c=c+32;
        input1[i]=c;
      }
    sort(input1.begin(),input1.end());  
    }
    string input2;
    cout<<"Enter the string 2:";
    getline(cin,input2);
    for(int i=0;i<input2.size();i++){
     char c=input2[i];
      if(c>='A' && c<='Z'){
        c=c+32;
        input2[i]=c;
      }
    sort(input2.begin(),input2.end());
    }
    if(input1==input2){
        cout<<"The words are anagram."<<endl;
    }
    else{
        cout<<"The words are not anagram.";
    }
}