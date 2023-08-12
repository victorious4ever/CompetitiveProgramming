#include <fstream>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

const int MAX_TIME = 1000;

struct Cow {
	int start, end;
	int buckets;
};
//this was copied from the internal sol
// This is because I spent hours trying to solve this question and I couldnt only to realize that I had been reading the input wrong thinking that the final line was b[i] rather than the 3rd number
// This problem is very trivial however
int main() {
	std::ifstream read("blist.in");
	int n;
	read >> n;
	vector<Cow> cows(n);
	for (Cow& c : cows) { read >> c.start >> c.end >> c.buckets; }

	// The maximum number of buckets needed
	int max_buckets = 0;

	/*
	 * For each possible time, check how many buckets are needed at that time
	 * and update the maximum accordingly
	 */
	for (int t = 1; t <= MAX_TIME; t++) {
		int curr_buckets = 0;
		for (const Cow& c : cows) {
			if (c.start <= t && t <= c.end) { curr_buckets += c.buckets; }
		}
		max_buckets = std::max(max_buckets, curr_buckets);
	}

	std::ofstream("blist.out") << max_buckets << endl;
}
