#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	string mergeAlternately(string word1, string word2) {
		string result = word1 + word2;
		
		int wordIndex = 0;
		int resultIndex = 0;
		while (wordIndex < word1.length() || wordIndex < word2.length()) {

			if (wordIndex < word1.length()) { result[resultIndex] = word1[wordIndex]; resultIndex++; }
			if (wordIndex < word2.length()) { result[resultIndex] = word2[wordIndex]; resultIndex++; }

			wordIndex++;
		}

		return result;
	}

	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
		vector<bool> result;
		int maxCandies = 0;

		for (int i = 0; i < candies.size(); i++) {
			if (candies[i] > maxCandies) { maxCandies = candies[i]; }
		}

		for (int i = 0; i < candies.size(); i++) {
			if (candies[i] + extraCandies >= maxCandies) { result.push_back(true); }
			else { result.push_back(false); }
		}

		return result;
	}
};

int main() {

	Solution sol;

	

	return 0;
}