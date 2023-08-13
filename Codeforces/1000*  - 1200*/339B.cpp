//https://codeforces.com/problemset/submission/339/218486060
#include<bits/stdc++.h>
using namespace std;
//Taken because my solution had TLE
int main(){
int n,m,p=1,x;
long long sum=0;
cin>>n>>m;
while(m--){
cin>>x;
sum+=(x-p+n)%n;
p=x;
}
cout<<sum;
return 0;
}
 
