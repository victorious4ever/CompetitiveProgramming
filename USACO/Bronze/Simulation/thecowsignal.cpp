
#include <iostream>
#include <numeric>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);
	int m, n, k;
	cin >> m >> n >> k;
	
	for (int i = 0; i < m; i++) {
		string a;
		cin >> a;
		string z;
		for (int b = 0; b < n; b++) {
			for (int c = 0; c < k; c++) {
				z += a[b];
			}
		}
		for (int d = 0; d < k; d++) {
			cout << z << endl;
		}
	}

}
