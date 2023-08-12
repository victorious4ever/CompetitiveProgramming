
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
  	freopen("diamond.in", "r", stdin);
	int n, k;
	cin >> n >> k;
	vector<int> diamond(n);
	for (int i = 0; i < n; i++) {
		cin >> diamond[i];
	}
	int bro = 0;
	for (int x : diamond) {
    int ans = 0;
		for (int y : diamond) {
			if (y >= x && y <= x + k) {
				ans++;
			}
    
		}
    bro = max(ans, bro);
	}
  	freopen("diamond.out", "w", stdout);
  
	cout << bro << endl;
}
