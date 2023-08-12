#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
  int n;
  int m;
  cin >> n >> m;
   multiset<int> a;
  int insert;
  for(int i = 0; i < n; i++){
    cin >> insert;
    a.insert(insert);
  }
  int t;
  for(int i = 0; i < m; i++){
    cin >> t;
    auto temp = a.upper_bound(t);
    if(temp == a.begin()){
      cout << -1 << endl;
    }
    else{
      cout << *(--temp) << endl; //I dont understand what pointers do
      a.erase(temp);
    }
    
  }
  
	return 0;
}


