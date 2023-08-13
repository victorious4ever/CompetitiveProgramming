//https://codeforces.com/contest/131/submission/218459190
#include <bits/stdc++.h> 
using namespace std;

int main(){
string a;
cin >> a;
string s = "";
int n = a.length();



for(int i = 0; i < n; i++){
    if(isupper(a[i])){
            s += a[i];
    }
}
bool flag = false;

if(s.size() == n - 1 && islower(a[0])){
    flag = true;
 
} 

     if(s.size() == n){
          char l = tolower(a[0]);
    cout << l;
   for(int i = 1; i < n; i++){
       char b = tolower(a[i]);
        cout <<  b;
     }
     }
  
    else if(!flag){
        cout << a;
    }
    
    else{
    
    char t = toupper(a[0]);
    cout << t;
   for(int i = 1; i < n; i++){
       char b = tolower(a[i]);
        cout <<  b;
   }
    }
}








 
