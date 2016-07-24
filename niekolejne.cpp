//1211. Niekolejne wersja print

#include<stdio.h>
#include<iostream>
using namespace std;
main() {
	int n;
	cin >> n;
	if (n == 0) cout << n << endl;

	else if (n == 2 || n==1) cout << "NIE" << endl;
	else {
		for (int i = 0; i<n; i++) {
			if(i%2!=0) printf(%d \n, i);
		}


	}
return 0;
}
