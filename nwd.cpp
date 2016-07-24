// zadanie z spoj: najwiekszy wspolny dzielnik

#include<iostream>


using namespace std;

int nwd(int a, int b);
main() {
   int test, x, y;
   cin >> test;
   int result[test];
   
   for(int i = 1; i<=test; i++) {
        cin >> x >> y;
        result[i-1] =  nwd(x,y);
   }
   
   for(int i = 1; i<=test; i++) {

        cout << result[i-1] << endl;

   }
        return 0;
}

int nwd(int a, int b) {
    int supr; // najwieksza
    for (int i=1; i<=a || i<=b; i++) {
        if (a%i==0 && b%i==0)
			supr = i;
    }
    return supr;
}
