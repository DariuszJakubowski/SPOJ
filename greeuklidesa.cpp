// 804. Gra Euklidesa
// Kod zadania: EUCGAME  / faster
//---------------------------------------
#include<iostream>
using namespace std;
int main(void) {
    int t, a,b;
    cin>>t;
    while(t--) {
       // int i=0;
        cin>>a>>b;
        while(1) {
        if(a == b) break;
        if(a > b && a % b == 0) {a = b; break;}
        else if(a<b && b%a == 0) {b = a; break;}
        else if(a>b && a%b != 0) {a = a%b;}
        else if(a<b && b%a != 0) {b = b%a;}

        }

        /*while(1)    wersja wolna dla liczb m/ którymi sa duze roznice np. 100000 1
        {
           if(a>b) a=a-b;
            else b=b-a;
           if (a==b) break;
        }*/



        cout<< 2*a <<endl;
    }
}
