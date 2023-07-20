class Solution {
private:
    bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
public:
    
    string reverseVowels(string s) {
        //cout << s << endl;
        int savedIndex = s.size()-1;

        //Find first vowel
        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {

                //cout << "  FIRST VOWEL FOUND: " << s[i] << endl;

                //Find opposite vowel
                for (int x = savedIndex; x >= i; x--) {
                    if (isVowel(s[x])) {
                        //cout << "   SECOND VOWEL FOUND: " << s[x] << endl;

                        //Save index for next pair
                        savedIndex = x-1;

                        //Pair found, swap
                        char temp = s[i];
                        s[i] = s[x];
                        s[x] = temp;
                        break;
                    }
                }
            }

            //Checked all vowels
            if (i >= savedIndex) { break; }
        }

        return s;
    }
};