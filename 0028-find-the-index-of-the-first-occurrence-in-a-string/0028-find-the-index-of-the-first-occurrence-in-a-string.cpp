#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h_len = haystack.length();
        int n_len = needle.length();
        
        if (n_len == 0) return 0;
        if (h_len < n_len) return -1;
        
        for (int i = 0; i <= h_len - n_len; i++) {
            if (haystack[i] == needle[0]) {
                if (haystack.compare(i, n_len, needle) == 0) {
                    return i;
                }
            }
        }
        
        return -1;
    }
};