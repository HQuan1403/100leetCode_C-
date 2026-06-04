#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        int target_frequency = -1;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                if (target_frequency == -1) {
                    target_frequency = freq[i];
                } 
                else if (freq[i] != target_frequency) {
                    return false;
                }
            }
        }
        
        return true;
    }
};