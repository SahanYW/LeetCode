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
};