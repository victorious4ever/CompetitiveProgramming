
#include <iostream>
using namespace std;

int main() {
	freopen("pails.in", "r", stdin);
	int x, y, m;
	cin >> x >> y >> m;
	int closest = 0;
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= m; j++) {
			if ((x * i) + (y * j) > m) {
				break;
			}
			else {
			  int n = (x * i) + (y * j);
			closest = max(closest, n);
			  
			}
		}
	}
	freopen("pails.out", "w", stdout);
	cout << closest << endl;

}
