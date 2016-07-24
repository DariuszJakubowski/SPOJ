// najwiekszy wspolny dzielnik  - moja wersja  alg. euklidesa

#include<iostream>

using namespace std;

int nwd(int a, int b);
main() {
    int test,x,y;
    cin >> test;
    int result[test];
	
    for(int i = 1; i <= test; i++) {
		cin >> x >> y;
		result[i-1] = nwd(x,y);
	}
	
    for(int i = 1; i <= test; i++) {

		cout << result[i-1] << endl;

    }


    return 0;

    }
int nwd(int a, int b) {
	
    int c;
	
    while(1) {
		
		if(a > b) {
			 c=a%b;
			 if (c == 0) return b;
			 else
			 a=c;
		 }
		 
		else if (a < b) {
			 c=b%a;
			 if (c == 0) return a;
			 else
			 b=c;
		}
		
		else if ( a==b) return a;
    }
}
