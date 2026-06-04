#include <string>

using namespace std;

class Solution {
public:
    string reformatNumber(string number) {
        string digits = "";
        for (char c : number) {
            if (c != ' ' && c != '-') {
                digits += c;
            }
        }

        string result = "";
        int i = 0;
        int n = digits.length();

        while (n - i > 4) {
            result += digits.substr(i, 3) + "-";
            i += 3;
        }

        if (n - i == 4) {
            result += digits.substr(i, 2) + "-" + digits.substr(i + 2, 2);
        } else {
            result += digits.substr(i);
        }

        return result;
    }
};