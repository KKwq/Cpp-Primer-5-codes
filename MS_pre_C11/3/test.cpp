#include <iostream>
#include <vector>
using namespace std;

int main() {
    // unsigned cnt = 42;
    // 可以正常编译运行，但是仍是不符合C++11标准的
    // string bad[cnt];  // error: cnt is not a constant expression
    // bad[0] = "hi";
    // cout << bad[0] << endl;

    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *beg = begin(ia);
    int *last = end(ia);
    while (beg != last && *beg >= 0) {
        cout << *beg << " ";
        ++beg;
    }
    return 0;
}