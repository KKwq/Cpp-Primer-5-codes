#include <iostream>
using namespace std;

int main() {
    string s = "hello  world!!";
    for (decltype(s.size()) index = 0; index != s.size(); ++index) {
        s[index] = toupper(s[index]);
    }

    // for (decltype(s.size()) index = 0; index != s.size() &&
    // !isspace(s[index]);
    //      ++index) {
    //     s[index] = toupper(s[index]);
    // }
    cout << s << endl;
    return 0;
}