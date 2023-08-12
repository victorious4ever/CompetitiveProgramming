#include <bits/stdc++.h>

using namespace std;

int main() {
   freopen("herding.in", "r", stdin);
  // Use standard output to write to "paint.out"
  freopen("herding.out", "w", stdout);
 int a,b,c;
  cin >> a >> b >> c;
  vector<int> d;
  d.push_back(a);
  d.push_back(b);
  d.push_back(c);
  sort(d.begin(), d.end());

  if(d[2] - 2 == d[0] && d[1] - 1 == d[0]){
    cout << 0 << endl;
 

  }
  else if(d[2] - d[1] == 2 || d[1] - d[0] == 2){
    cout << 1 << endl;

  }
   else{
     cout << 2 << endl;
   }
  	int maxx = max(d[1] - d[0], d[2]-d[1]) - 1;
  cout << maxx << endl;
  

}
