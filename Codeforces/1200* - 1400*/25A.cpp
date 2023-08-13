#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
vector<int> a(n);
for(int i = 0; i < n; i++){
	cin >> a[i];
}
bool even = false;
if(a[0] % 2 == 0 && a[1] % 2 == 0){
   even = true;
}
else if(a[0] % 2 == 1 && a[1] % 2 == 1){
	   even = false;
}
else if(a[n - 1] % 2 == 0){
		even = true;
	}
	else{
		even = false;
	}
for(int i = 0; i < n; i++){
	  if(even && a[i] % 2 != 0){
		  cout << i + 1;
		  break;
	  }
	  else if(!even && a[i] % 2 == 0){
		  cout << i + 1;
		  break;
	  }
}

}

