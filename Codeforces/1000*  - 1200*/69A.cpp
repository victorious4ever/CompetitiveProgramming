//https://codeforces.com/problemset/submission/69/218418064
#include <bits/stdc++.h> 
using namespace std;

int main(){
int n;
cin >> n;
vector<int> x(n);
vector<int> y(n);
vector<int> z(n);
for(int i = 0; i < n; i++){
   cin >> x[i] >> y[i] >> z[i];
}
int xeq = 0;
int yeq = 0;
int zeq = 0;
for(int i = 0; i < n; i++){
     xeq += (x[i]);
     yeq += (y[i]);
     zeq += (z[i]);
}

if(xeq == 0 && yeq == 0 && zeq == 0){
  cout << "YES";
}
else{
  cout << "NO";
}
}
