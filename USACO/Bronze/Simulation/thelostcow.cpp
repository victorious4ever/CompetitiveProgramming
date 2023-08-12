// Source: https://usaco.guide/general/io
//7/1 test cases passed
#include <bits/stdc++.h>
using namespace std;
void setIO(string s) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main() {
	setIO("lostcow");
	long long x, y;
	cin >> x >> y;
	if (x == y) {
		cout << 0;
	}
	//kill me already I read the question wrong for the first time
	long long direction = 1;
	long long  move = 1;
	long long  dist = 0;
	while(true) {
		if ((direction = 1 && x <= y && x + move >= y) || (direction = -1 && x >= y && x - move <= y)) {
			//we found that stupid ass cow
			dist += abs(x - y);
			cout << dist << endl;
			break;
		}
		dist += move * 2;
		move *= 2;
		
		direction *= -1;
	}



}
