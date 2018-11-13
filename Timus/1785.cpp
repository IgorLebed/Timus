
#include <iostream>
#include <string>
using namespace std;
int main() {
   int quan{};
   cin >> quan;

   if (quan <= 4 && quan >=1)
       cout << "few";
   if (quan <= 9 && quan >= 5)
       cout << "several";
   if (quan <= 19 && quan >= 10)
       cout << "pack";
   if (quan <= 49 && quan >= 20)
       cout << "lots";
   if (quan <= 99 && quan >= 50)
       cout << "horde";
   if (quan <= 249 && quan >= 100)
       cout << "throng";
   if (quan <= 499 && quan >= 250)
       cout << "swarm";
   if (quan <= 999 && quan >= 500)
       cout << "zounds";
   if (quan >= 1000 && quan <= 2000)
       cout << "legion";
}
