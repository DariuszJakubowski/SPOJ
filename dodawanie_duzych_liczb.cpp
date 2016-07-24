// zadanie dodawanie duzych liczb
//u
under constr
#include<iostream>
#include<iomanip>

using namespace std;

main() {
     int test;
     long double x,y;
     cout << setprecision(10000);
	 cin >> test;
     long double result[test];
	 
    for(int i = 1; i<=test; i++) {
        cin >> x >> y;
        result[i-1] = (x + y);
    }
	
    for(int i = 1; i<=test; i++) {
		cout << result[i-1] 
		<< endl;
	}

        return 0;
}
