//https://codeforces.com/problemset/submission/479/218428933
#include <bits/stdc++.h> 
using namespace std;

int main(){
int a, b, c;
cin >> a >> b >> c;
int cool = 0;
int lol = a * b + c;
cool = max(lol,cool);
lol = a + (b * c);
cool = max(lol,cool);  lol = (a + b) * c;
cool = max(lol,cool);
 lol = (b + c) * a;
cool = max(lol,cool);
 lol = (b * c * a);
cool = max(lol,cool);
 lol = (b + c + a);
cool = max(lol,cool);
cout << cool;

}



 
