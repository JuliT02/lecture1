#include <cmath>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string encode(string clearText){
    
    string output = "";
    for(int i=0; i<clearText.size(); i++){
        if (isspace(clearText[i])){
            output += '_';
        }
        else {
            output += clearText[i];
        }
    }

    return output;
}

int main(){
    cout << "Hello World Hello -> " << encode("Hello World Hello") << endl;
}