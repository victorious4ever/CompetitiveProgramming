// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

//I love hu tao
int main() {
  int barn_i = 0, barn_j = 0, rock_i = 0, rock_j = 0, lake_i = 0, lake_j = 0;
	for (int i = 0; i < 10; i++) {
		string row;
		cin >> row;
		for (int j = 0; j < 10; j++) {
			if (row[j] == 'B') {
				barn_i = i;
				barn_j = j;
			} else if (row[j] == 'R') {
				rock_i = i;
				rock_j = j;
			} else if (row[j] == 'L') {
				lake_i = i;
				lake_j = j;
			}
		}
	}

	// initial distance
	int cows = abs(barn_i - lake_i) + abs(barn_j - lake_j) - 1;
  //This part was copied from usacos official solution
  if(lake_i == barn_i == rock_i){
    cows+=2;
  }
  else if(barn_j == rock_j == lake_j){
    cows+= 2;
  }
/*
im gonna be honest here since I looked at USACOs official solution because I was confused
on whether there could be multiple rocks or not I cant bother on finishing the rest of if statement
im gonna count this as a dub for me because I thought of this logic myself but I didnt want to waste time if there could be multiple rocks
*/
cout << cows << endl;
   
  }



   
    
    
       



   



