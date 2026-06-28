#include <iostream>
using namespace std;

int main() {
    string input;
    cout<<"Enter the string: ";
    getline(cin,input);
    string compressed = "";
    int count;
    for(int i=0;i<input.size();i=i+count){
        count=0;
        for(int j=i;j<input.size();j++){
            if(input[i]==input[j]){
                count++;
            }
            else{
                break;
            }    
        }
        compressed=compressed+input[i];
        compressed=compressed+to_string(count);
    }
    cout<<"Compressed string is : "<<compressed;    
}    