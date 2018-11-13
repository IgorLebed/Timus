#include <iostream>

using namespace std;
int main(){
   int n = 0, arr[1000], max = 0, mid = 0, max1 = 0;
   cin >> n;
   for (int i = 0; i < n; i++){
       cin >> arr[i];
   }
   for (int i = 0; i < ( n-1); i++){
       max1 = arr[i-1] + arr[i] + arr [i+1];
       if (max1 > max){
           max = max1;
           mid = i + 1;
       }
   }
   cout << max << " " << mid;
   return 0;
};
