#include <string>
#include <sstream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string toGoatLatin(string sentence) {
        // Tập hợp chứa các nguyên âm để tra cứu nhanh trong O(1)
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        stringstream ss(sentence);
        string word;
        string result = "";
        string suffix_a = "a"; 
        while (ss >> word) {
            if (!result.empty()) {
                result += " ";
            }
            if (vowels.count(word[0])) {
                result += word + "ma";
            } else {
                result += word.substr(1) + word[0] + "ma";
            }
            result += suffix_a;
            suffix_a += "a";
        }

        return result;
    }
};