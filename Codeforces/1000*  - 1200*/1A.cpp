#include <bits/stdc++.h> 
using namespace std;
//Fails test 9
int main(){

 long long n, m, a;
cin >> n >> m >> a;


 if(a == n){
    cout << ceil(m / a) << endl;
}
else if(a == m){
    cout << ceil(n / a) << endl;
}
else if(a > n && a > m){
    cout << 1 << endl;
}
else{
cout <<  ceil(n / a) + ceil(m / a) << endl;
}

}
