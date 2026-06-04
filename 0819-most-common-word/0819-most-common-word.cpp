#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <sstream>
#include <cctype>

using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> banned_set(banned.begin(), banned.end());
        for (char& c : paragraph) {
            if (ispunct(c)) {
                c = ' '; 
            } else {
                c = tolower(c); 
            }
        }
        stringstream ss(paragraph);
        string word;
        unordered_map<string, int> word_counts;
        
        string most_frequent_word = "";
        int max_count = 0;
        
        while (ss >> word) {
            if (banned_set.find(word) == banned_set.end()) {
                word_counts[word]++;
                if (word_counts[word] > max_count) {
                    max_count = word_counts[word];
                    most_frequent_word = word;
                }
            }
        }
        
        return most_frequent_word;
    }
};