//https://codeforces.com/problemset/submission/1853/218224369
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int small =  1e9;
		int a;
		cin >> a;
		vector<int> sorted(a);
		for(int i = 0; i < a; i++){
         cin >> sorted[i];
		}
		bool red = false;
		for(int i = 0; i < a; i++){
               if(sorted[i] > sorted[i + 1] && i != a - 1){
				    red = true;
				
			   }
			   if(i != a - 1){
			   int place = sorted[i + 1] - sorted[i];
			   
               small = min(place, small);
			   }

		}
	    if(red == true){
			cout << 0 << endl;
 		}
		else if(small != 0 && small % 2 == 0){
            cout << (small / 2) + 1 << endl;
		}
		else if(small % 2 != 0){
			cout << (small / 2) + 1 << endl;
		}
	
		else if(small == 0){
			cout << small + 1 << endl;
		}


	}
}
