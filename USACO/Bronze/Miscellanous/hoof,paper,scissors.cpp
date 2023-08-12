// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;


int main() {
   int n;
   cin >> n;
   vector<int> first(n);
   vector<int> second(n);
   int ans = 0;
   int count = 0;
   for(int i = 0; i < n; i++){
     cin >> first[i] >> second[i];
   }
   
     //1 == scissors
       // 2 = paper
       // 3 = rock
   for(int j = 0; j < n; j++){
     if(first[j] == 1 && second[j] == 2){
     
       count++;
     }
     else if(first[j] == 2 && second[j] == 3){
       count++;
     }
       else if(first[j] == 3 && second[j] == 1){
       count++;
     }
    
     }
     ans = max(ans,count);
     count = 0;
       //1 == scissors
       // 2 = rock
              // 3 = paper
     for(int j = 0; j < n; j++){
         if(first[j] == 1 && second[j] == 3){
     
       count++;
     }
     else if(first[j] == 3 && second[j] == 2){
       count++;
     }  else if(first[j] == 2 && second[j] == 1){
       count++;
     }

     }
     ans = max(count, ans);
     count = 0;
 //1 == paper
       // 2 = scissors
              // 3 = rock
     for(int j = 0; j < n; j++){
         if(first[j] == 2 && second[j] == 1){
     
       count++;
     }
     else if(first[j] == 3 && second[j] == 2){
       count++;
     }
       else if(first[j] == 1 && second[j] == 3){
       count++;
     }
     }
         ans = max(count, ans);
     count = 0;
      //1 == paper
       // 2 = rock
              // 3 = sci
     for(int j = 0; j < n; j++){
         if(first[j] == 1 && second[j] == 2){
     
       count++;
     }
     else if(first[j] == 3 && second[j] == 1){
       count++;
     }
       else if(first[j] == 2 && second[j] == 3){
       count++;
     }
     }
         ans = max(count, ans);
     count = 0;
     //1 == rock
       // 2 = paper
              // 3 = sci
     for(int j = 0; j < n; j++){
         if(first[j] == 1 && second[j] == 3){
       
       count++;
     }
     else if(first[j] == 3 && second[j] == 2){
       count++;
     }
       else if(first[j] == 2 && second[j] == 1){
       count++;
     }
     }
         ans = max(count, ans);
     count = 0;
      //1 == rock
       // 2 = sci
              // 3 = paper
     for(int j = 0; j < n; j++){
         if(first[j] == 3 && second[j] == 1){
     
       count++;
     }
     else if(first[j] == 1 && second[j] == 2){
       count++;
     }
     else if(first[j] == 2 && second[j] == 3){
       count++;
     }
     }
         ans = max(count, ans);
     
     cout << ans << endl;
     

   }



