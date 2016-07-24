
#include <iostream>

using namespace std;

int binomial(int n, int k) {
   if(k==0||k==n) {
      return 1;
   }
   else {
       cout << "operation " << n << k << endl;
      return ((binomial(n-1,k-1))+(binomial(n-1,k)));
   }
}


int main() {
   int t;
   cin >> t;

   while(t) {
      int a,b;
      cin >> a >> b;
      cout << binomial(a , b) << endl;

      t--;
   }
   
   return 0;
}
