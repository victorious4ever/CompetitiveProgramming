#include <bits/stdc++.h>
#include <iostream>

using namespace std;

const int MAXN = 55;

int N, w[MAXN];

// This was copied I spent like 2 hours trying to figure out the problem to this
// solution and still couldnt figure it out and so I just copied it.
int main() {
  int n, x;
  cin >> n >> x;
  map<int, int> m;
  vector<int> values(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i];
  }

  for (int i = 0; i < n; i++) {
    if (m.count(x - values[i])) {
      cout << i + 1 << " " << m[x - values[i]] << endl; //We found the complement!
      return 0;
    }

    m[values[i]] = i + 1; //Fill up the map;
  }
  cout << "IMPOSSIBLE";
}
