/*
1145. Imieniny
Kod zadania: MWPZ06D
jas rozdaje cukierki
---------------------------------*/
#include<iostream>
using namespace std;
int main() {
    unsigned int t, l, c;
    cin >> t;
    while(t--) {
        cin>>l >>c; l--;
        if(l == 0 || l>c || (c>l && c%l != 0)) cout << "TAK" << endl;
        else  cout << "NIE" << endl;
    }
}
