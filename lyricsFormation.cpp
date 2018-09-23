#include <iostream>
#include <string>
using namespace std;

// simple lyric formation

string format(string input){
    int it = 3;
    while (it < input.length()){
        if(input[it] == '[' && input[it + 9] == ']'){
            input.erase(it,10);
        }
        it++;
    }
    return input;
}


int main() {
    int i = 200;
    while (--i > 0){
        string s;
        getline(cin,s);
        s = format(s);
        cout << s << endl;
    }
    return 0;
}
