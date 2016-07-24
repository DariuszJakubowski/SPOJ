
#include<iostream>

using namespace std;

bool prime_number(int n) { // liczba pierwsza
  if(n<2)
    return false; //gdy liczba jest mniejsza ni¿ 2 to nie jest pierwsz¹

  for(int i = 2; i * i <= n; i++)
    if(n%i==0)
      return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
  return true;
}

int main() {
int n, test;
cin >> test;
int result[test];

for(int i = 1; i <= test; i++) {
    cin>>n;
    result[i-1] = prime_number(n);
}

for(int i = 1; i<=test; i++) {
     if(result[i-1]) //lub czy_pierwsza(n)==1
     cout<<"TAK"<<endl;
        else
        cout<<"NIE"<<endl;
}

  return 0;
}
