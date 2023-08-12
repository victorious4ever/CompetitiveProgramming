/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>x(n);
	vector<int> y(n);
	for(int i = 0; i < n; i++){
		cin >> x[i] >> y[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
		if(x[i] == x[j]){
		 int ansy = abs(y[i] - y(j));

		}

	}
	int realans = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(x[i] == x[j]){
		 int ansy = abs(y[i] - y(j));
          break;
		}
               for(int k = 0; k < n; k++){
				   if(y[k] == y[j]){
                     int ansx = abs(x[k] - x[j]);
					 int ans = ansx * ansy;
					 realans = max(ans, realans);
					 break;
				   }
				   else if(y[k] == y[i]){
                     int ansx = abs(x[k] - x[i]);
					 int ans = ansx * ansy;
					 realans = max(ans, realans);
					 break;
				   }
			   }

		}
		 

	}
	cout << realans < endl;

}
*/
//Code before copy
#include <bits/stdc++.h>
using namespace std;
//it hurts I wasnt abe to solve this as this was easy but its okay as I am still bad at coding

int main() {
	freopen("triangles.in", "r", stdin);

	int n;
	cin >> n;
	vector<int> x(n);  // x coordinates of all fence posts
	vector<int> y(n);  // y coordinates of all fence posts
	for (int i = 0; i < n; i++) { cin >> x[i] >> y[i]; }

	int max_area = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				// Check to see if both points are parallel to the x & y axis
				if (y[i] == y[j] && x[i] == x[k]) {
					int area = abs((x[j] - x[i]) * (y[k] - y[i]));
					max_area = max(max_area, area);
				}
			}
		}
	}

	freopen("triangles.out", "w", stdout);
	cout << max_area << endl;
}
