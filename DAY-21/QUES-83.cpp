#include<iostream>
using namespace std;

int main(){
    int vow=0,cons=0;
    string input;
    cout<<"Enter the string:";
    getline(cin,input);
    for(int i=0;i<input.size();i++){
        char ch=input[i];
      if((ch>='A'&& ch<='Z') || (ch>='a'&& ch<='z')){
        if(input[i]=='a'|| input[i]=='e'|| input[i]=='i'|| input[i]=='o'|| input[i]=='u'||
            input[i]=='A'|| input[i]=='E'|| input[i]=='I'|| input[i]=='O'|| input[i]=='U'){
              vow++;
        }
      else
      cons++;
      }
    }
    cout<<"Vowels in string:"<<vow<<endl;
    cout<<"consonants in string:"<<cons;
    return 0;
}