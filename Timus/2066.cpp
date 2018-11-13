#include <iostream>

using namespace std;

int main(){
 int a, b, c;
 cin >> a;
 cin >> b;
 cin >> c;


 int res = 0;

 res = min(res, a+b+c);
 res = min(res, a+b-c);
 res = min(res, a+b*c);
 res = min(res, a-b+c);
 res = min(res, a-b-c);
 res = min(res, a-b*c);
 res = min(res, a*b+c);
 res = min(res, a*b-c);
 res = min(res, a*b*c);

 cout << res;

 return 0;
}
