#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
	freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);

	int N, K;
	cin >> N >> K;

	// Number of characters on the current line (not including spaces)
	int word_len = 0;
	for (int i = 0; i < N; i++) {
		string word;
		cin >> word;
		// Get the new length if we were to put the word on the current line.
		word_len += word.length();
		if (word_len <= K) {
			// Print a space if it isn't the first word.
			if (i != 0) { cout << ' '; }
			cout << word;
		} else {
			cout << "\n" << word;
			word_len = word.length();
		}
	}
}
//Ashamed to say that I didnt solve this one on my own I had the approach down but for some reason I was encountering some weird code glitch.
