#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//copied because this method is faster than mine
void solve() {
	int n;
	cin>>n;
	vector<int>a(n+1);
	for(int i=1; i<=n; i++) {
		int x;
		cin>>x;
		if(x<=n) a[x]++;
	}
	vector<int>ans(n+1);
	ans[0]=0;
	for(int i=1; i<=n; i++) {
		for(int j=i; j<=n; j+=i) {
			ans[j]+=a[i];
		}
	}
	cout<<*max_element(ans.begin(),ans.end())<<endl;
}
int main () {
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}
