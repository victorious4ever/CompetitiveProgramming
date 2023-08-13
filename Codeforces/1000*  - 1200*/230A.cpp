/https://codeforces.com/contest/230/submission/218465687
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> a;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        a.push_back(make_pair(x, y));
    }
    bool flag = false;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        if(s <= a[i].first){
            flag = true;
            break;
        }
        else{
            s += a[i].second;
        }
    }
    if(flag){
        cout << "NO";
    }
    else{
     
        cout << "YES";
    }
    }









 
