class Solution {
public:
    string reverseWords(string s) {
        string temp, reversed;
        stringstream ss(s);

        ss >> temp;
        reversed = temp;

        while (ss >> temp) {
            reversed = temp + " " + reversed;
        }

        return reversed;
    }
};