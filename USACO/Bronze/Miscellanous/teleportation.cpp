// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
int main() {
  
   int start, end, x, y;
   cin >> start >> end >> x >> y;
   int directdist = abs(end - start);
   int count = 0;
   if(abs(start - x) <= abs(start - y)){
     count += abs(start-x);
     count += abs(end - y);
   }
   else{
      count += abs(start-y);
     count += abs(end - x);
   }
  
   count = min(directdist, count);
   cout << count << endl;

  }



   
    
    
       



   



