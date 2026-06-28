#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout<<"Enter the sentence: ";
    getline(cin,input);

    stringstream ss(input);
    string word;
    string longest = "";

    while(ss >> word){
        if(word.size()>longest.size()){
            longest=word;
        }
    }
    cout<<"The longest word is: " <<longest;
}