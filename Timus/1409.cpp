#include <iostream>


using namespace std;

int main() {
    int garri{};
    int larri{};
    cin >> garri >> larri;
    int all_point = (garri + larri) - 1;
    cout << all_point - garri << " " << all_point - larri;
}
