#include <bits/stdc++.h>
#include <iostream>

using namespace std;
using ll = long long;


// Intuition taken from youtube video in a diff language
void setIO(string name = "") {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}
int main() {
   setIO("whereami");
  int n;
  cin >> n;
  string a;
  cin >> a;
  for(ll k = 1; k <= n; k++){
    set<string> s;
    for(ll i = 0; i < n - k + 1; i++){
      string s1;
      for(ll j = 0; j < k; j++){
        s1 += a[i + j];
      }
      s.insert(s1);
    }
    if(s.size() == n - k + 1){
      cout << k << endl;
      return 0;
    }
  }


    
  }
