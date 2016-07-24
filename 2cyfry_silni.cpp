
//rownanie lionowe

#include<iostream>
#include<iomanip>
using namespace std;

int main() {

float a,b,c,x;
cin>> a >> b >> c;
cout << setprecision(2) << fixed;
if(c-b == 0) {
	cout << "NWR"; 
	return 0;
	}
if(a == 0) {
	cout << "BR"; 
	return 0;
}
x = ( c - b ) / a;
cout << x;
return 0;
}
