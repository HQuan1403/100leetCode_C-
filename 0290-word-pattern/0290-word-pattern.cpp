
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        int n = pattern.length();
        int i = 0;
        string char_to_word[26] = {""};
        unordered_map<string, char> word_to_char;
        while (ss >> word) {
            if (i >= n) return false;

            char c = pattern[i];
            int idx = c - 'a';
            if (char_to_word[idx] != "" && char_to_word[idx] != word) {
                return false;
            }
            if (word_to_char.count(word) && word_to_char[word] != c) {
                return false;
            }
            char_to_word[idx] = word;
            word_to_char[word] = c;

            i++; 
        }
        return i == n;
    }
};