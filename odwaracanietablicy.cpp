// odwracanie elementow tablicy
#include<iostream>
#include<algorithm>


using namespace std;


main() {
   int t, n;
   cin >> t;
   for (int i = 1; i <= t; i++) {
        cin >>n;
        int a[n];
        for (int ii = 0; ii < n; ii++ ) {
            cin >>a[ii];
        }
		reverse(a,a+n);
		for (int ii = 0; ii < n; ii++ ) {
				cout << a[ii] << " ";
		}
		cout << endl;
    }



    return 0;
}
