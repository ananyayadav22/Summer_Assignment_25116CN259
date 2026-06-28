#include<iostream>
using namespace std;

int main(){
    int count=0;
    string input;
    cout<<"Enter the string:";
    getline(cin,input);
    for(int i=0;i<input.size();i++){
     char c=input[i];
      if(c>='A' && c<='Z'){
        c=c+32;
        input[i]=c;
      }
    }
    for(int i=0;i<input.size();i++){
        count=0;
        if(input[i]==' ')
        continue;
        for(int j=0;j<input.size();j++){
            if(input[i]==input[j]){
                count++;
            }    
        }
        if(count==1){
            cout<< "First non-repeating character is: " <<input[i];
            return 0;
        }    
    }       
}    