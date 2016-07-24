//potegowanie - wyswietl otostatnia liczba
// 499. Czy umiesz potêgowaæ
//PA05_POT

#include <iostream>

using namespace std;

int ostania_cyfra_potegowania(long a, long b);

main()
{


int t;
long a,b; // podstawa i wyk³adnik potegi
cin >> t;
int x[t];
for(int i = 1; i <= t; i++)
    {
    cin >> a >> b;
    if (a >= 10) a = a%10;
    x[i-1] = ostania_cyfra_potegowania(a,b);
    }

for (int i = 1; i <= t; i++)
    {
    cout << endl << x[i-1];
    }


         return 0;
}

int ostania_cyfra_potegowania(long a, long b)
{
    if (b==0) return 1;
    if (( a * a ) % 10 == a) return a;
    else return 666;
}
