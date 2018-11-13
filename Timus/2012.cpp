#include <iostream>
#include <string>
using namespace std;
int main() {
    int f {};
    int all_f = 12;
    int all_time = 300;
    cin >> f;
    all_f -= f;
    int f_time = all_f * 45;
    int next_time = 300 - 60;
    if (next_time - f_time < 0) {
        cout << "NO";
    }
    else cout << "YES";
}
