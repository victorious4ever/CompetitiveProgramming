
#include <bits/stdc++.h>

using namespace std;


int main() {
 freopen("notlast.in", "r", stdin)
  freopen("notlast.out", "w", stdout);
  map<string, int> m;
  
  int n;
  cin >> n;
  string a;
  int b;
  for (int i = 0; i < n; i++) {
    cin >> a;
    cin >> b;
    m[a] += b;
  }
  vector<pair<int, string>> d;
  for (pair<string, int> a : m) {
    d.push_back({a.second, a.first});
  }
  sort(d.begin(), d.end());
  int dup = 0;
  if (d.size() == 7) {
    while (d[dup].first == d[dup + 1].first) {
      dup++;
    }
  }

  dup += 1;
    if(n < 7){
    dup--;
  }

  if (d[dup].first != d[dup + 1].first) {
    cout << d[dup].second << endl;
  } else {
    cout << "Tie" << endl;
  }
}
