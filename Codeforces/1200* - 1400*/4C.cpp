//https://codeforces.com/problemset/submission/4/218689478
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
map<string, int> a;
string s = " ";
while(cin >> s){
	a[s]++;
	if(a[s] > 1){
        cout << s << a[s] - 1 << endl;
	}
	else{
		cout << "OK" << endl;
	}

}
}
 
