#include <iostream>
#include <vector>
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

    vector<int> vi(10);
    return 0;
}