// Source: https://usaco.guide/general/io
//btw I overthought this problem so much
#include <bits/stdc++.h>
using namespace std;

int main() {
   freopen("outofplace.in", "r", stdin);
   
	freopen("outofplace.out", "w", stdout);
   int n;
   cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++){
	   cin >> a[i];
   }
   vector<int> sorted = a;
   sort(sorted.begin(), sorted.end());
   int count = 0;
   for(int i = 0; i < n; i++){
	   if(sorted[i] != a[i]){
		   count++;
	   }
   }
   cout << count - 1 << endl;
}
