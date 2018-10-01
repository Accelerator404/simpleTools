#include <iostream>
#include <string>
using namespace std;

// manget formation

string format(string input){
    if(input.length() < 12)
        return "";
    else
        input = "magnet:?xt=urn:btih:" + input;
    return input;
}


int main() {
    int i = 200;
    while (--i > 0){
        string s,s1;
        cin >> s;
        if(s.find_first_of("、") != string::npos){
            s1 = s.substr(s.find_first_of("、")+3,string::npos);
            s = s.substr(0,s.find_first_of("、"));
        }
        s = format(s);
        if(s.length()>3)
            cout << s << endl;
        if(s1.length() > 1){
            s1 = format(s1);
            cout << s1 << endl;
        }
    }
    return 0;
}
