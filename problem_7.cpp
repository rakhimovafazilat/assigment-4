#include <iostream>
#include <iomanip>
using namespace std;

int main() {


 float f[5];
   for (int i = 0; i < 5; ++i) {
    cin >> f[i];
       f[i]=f[i]/2;
  }
  for (int i = 0; i < 5; i++) {
      cout <<setprecision(3)<<f[i]<<" ";
  }
  return 0;
}
