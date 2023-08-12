#include <bits/stdc++.h>
//my incorrect sol passed 1/10 test cases
using namespace std;

int main() {


  int m, k, n;
  cin >> n >> m >> k;
  vector<int> a(n, 0);
  vector<int> status(m);
  vector<int> demand(k);
  vector<int> demandpos(k);
  for (int i = 0; i < m; i++) {
    cin >> status[i];
    status[i]--;
  }
  for (int i = 0; i < k; i++) {
    cin >> demand[i] >> demandpos[i];
    demandpos[i]--;
  }
  for (int i = 0; i < k; i++) {
    a[demandpos[i]]++;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (demandpos[i] == status[j]) {
        int f = i - 1;
        int p = f + 1;
        for (int f = i - 1; f >= 0; f--) {
          if (a[f] == 0) {
            a[f]++;
          } else {
            break;
          }
        }
        for (int p; p < p + k - 1; p++) {
          if (a[p] == 0) {
            a[p]++;
          } else {
            break;
          }
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {

    if (a[i] == 0) {
      cout << i + 1 << endl;
      break;
    }
  }
}
