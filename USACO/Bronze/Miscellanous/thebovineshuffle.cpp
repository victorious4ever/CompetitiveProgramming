// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;


int main() {
  //gahhhh so easy yet it took me so long to do this smh
   int n;
   cin >> n;
   vector<long long> shuffle(n);
   vector<long long> initial(n);
  
   for(int i = 0; i < n; i++){
     cin >> shuffle[i];
     
   }
   for(int i = 0; i < n; i++){
     cin >> initial[i];
   }
       
   for(int i = 0; i < 3;i++){
    vector<long long> sorted(n);
     for(int i = 0; i < n; i++){
       sorted[i] = initial[shuffle[i] - 1];
     }
     initial = sorted;
   }

   for(int i = 0; i < n; i++){
     cout << initial[i] << endl;
   }

   }



