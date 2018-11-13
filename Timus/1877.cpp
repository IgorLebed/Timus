#include <iostream>
  using namespace std;
  int main()
    {
        unsigned int A, B;
        cin >> A >> B;
        if ((A + 1) % 2 || B % 2)
            cout << "\nyes";
        else cout << "\nno";
        return 0;
    }
