#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string thousandSeparator(int n) {
        if (n == 0) return "0";
        
        string result = "";
        int count = 0;
        while (n > 0) {
            int digit = n % 10; 
            result += (digit + '0'); 
            count++;
            
            n /= 10; 
            if (count % 3 == 0 && n > 0) {
                result += '.';
            }
        }
        reverse(result.begin(), result.end());
        
        return result;
    }
};