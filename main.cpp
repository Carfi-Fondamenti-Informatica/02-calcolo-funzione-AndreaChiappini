#include <iostream>
using namespace std;

int main() {
   int a,b,x,y,z;
   cin >> a >> b >> x >> y;
   if (x<0 and y>0) {
      z= a*x - b*y;
      cout << z << endl;
   }
   else if(x>=0 and y<=0) {
      z= a*x*x - b*y;
      cout << z << endl;
   }
   else {
      z= a*x + b*y*y;
      cout << z << endl;
   }
   return 0;
}
