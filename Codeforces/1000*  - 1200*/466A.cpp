// https://codeforces.com/problemset/submission/466/218590940
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	if (a * m < b)
		b = a * m;
	cout << min((n + m - 1) / m * b, n / m * b + (n % m) * a);
}
