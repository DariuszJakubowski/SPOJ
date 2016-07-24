//723. ROL
// Przesuñ elementy tablicy cyklicznie w lewo

#include<iostream>
using namespace std;
int main(void) {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int x[n], y[n];
        for(int i = 0; i<n; i++) {
            cin>> x[i];
        }

        for(int i = 0; i<n; i++) {
           y[i] = x[i+1];
        }
        y[n-1]=x[0];
        for(int i = 0; i<n; i++) {
           cout << y[i] << " ";
        }
		cout << endl;
    }
	
return 0;
}
