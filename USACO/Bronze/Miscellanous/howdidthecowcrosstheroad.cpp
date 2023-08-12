// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;


int main() {
   int n;
   cin >> n;
  
   int a[n];
   fill(a, a + n, -1);
   
   
   
   int count = 0;
   
   for(int i = 0; i < n; i++){
      int cow, dir;
      cin >> cow >> dir;
      cow -= 1;
      if(a[cow] == -1){
      a[cow] = dir;
      }
      if(a[cow] != -1 && a[cow] != dir){
        a[cow] = dir;
    
        count++;
      }
  }
  cout << count;

}

