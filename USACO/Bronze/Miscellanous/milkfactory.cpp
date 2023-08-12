// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

//copied from usacos solution
int indg[101];
int outdg[101];
int main() {
  int n;
  cin >> n;

  for(int i = 0; i < n - 1; i++){
      int a, b;
	  cin >> a >> b;
	  outdg[a]++;
	  indg[b]++;
  }
  bool flag = false;
  int ans = -1;
  for(int i = 1; i <= n; i++){
     if(flag && outdg[i] == 0 && indg[i] > 0){
		 ans = -1;
		 break;
	 }
	 else if(outdg[i] == 0 && indg[i] > 0){
           flag = true; //we have found one
		   ans = i;
	 }
	 
  }
  cout << ans << endl;
}


   
    
    
       



   



