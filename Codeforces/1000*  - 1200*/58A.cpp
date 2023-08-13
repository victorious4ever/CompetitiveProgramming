//https://codeforces.com/problemset/submission/58/218423617
#include <bits/stdc++.h> 
using namespace std;

int main(){
string s;
cin >> s;
int n = s.size();
string p = "";

for(int i = 0; i < n; i++){

if(s[i] == 'h'&& p.size() == 0){
   p += s[i];
  
}
else if(s[i] == 'e' && p.size() == 1){
   p += s[i];
  
}
else if(s[i] == 'l'&& p.size() == 2){
   p += s[i];
  
}
else if(s[i] == 'l' && p.size() == 3){
   p += s[i];
  
}

else if(s[i] == 'o' && p.size() == 4){
   p += s[i];
  
}
}  

if(p == "hello"){
   cout << "YES";
}
else{
   cout << "NO";
}

}



 
