#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  //Got the firing approach idea from someone else but I coded it myself
	freopen("lifeguards.in", "r", stdin);
	freopen("lifeguards.out", "w", stdout);
  int n;
  cin >> n;
  int times[1000];
  vector<int> start(n);
  vector<int> end(n);
    for(int k = 0; k < 1000; k++){
    times[k] = 0;
  }
  for(int i = 0; i < n; i++){
    cin >> start[i] >> end[i];
    for(int j = start[i]; j < end[i]; j++){
      times[j]++;
    }
  }

  int low = 0;
  for(int i = 0; i < n; i++){
    int time = 0;
    for(int j = start[i]; j < end[i]; j++){
      times[j]--;
    }
    for(int q = 0; q < 1000; q++){
      if(times[q] > 0){
      time++;
      }
    }
    low = max(low, time);
    for(int b = start[i]; b < end[i]; b++){
       times[b]++;
    }
  }
  cout << low << endl;
}
