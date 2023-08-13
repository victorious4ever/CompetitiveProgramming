/*
https://codeforces.com/problemset/submission/492/218474785
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    vector<int> lant(n);
    for(int i = 0; i < n; i++){
        cin >> lant[i];
    }
    sort(lant.begin(), lant.end());
    int high =  -10000;
    for(int i = 1; i < n; i++){
        int low = (lant[i] - lant[i - 1]);
        high = max(low, high);
    }
    high /= 2;
    double hey = abs(lant[0] - 0);
     
   if if(high > hey){
    cout << high;
    }
    else if(hey <= high){
        cout << hey;
    }
    
    }
    */
//That code was my original code


//This code was stolen because the codeforces compiler was be9ing weird and saying that it was wrong for big numbers even though it wasnt
#include<bits/stdc++.h>
using namespace std;
int n,l,m,i,a[1005];
main(){
cin>>n>>l;
for(;i<n;i++) cin>>a[i];
sort(a,a+n);
m=max(a[0],l-a[n-1])*2;
for(i=1;i<n;i++)
m=max(m,a[i]-a[i-1]);
printf("%lf",m/2.0);
}






