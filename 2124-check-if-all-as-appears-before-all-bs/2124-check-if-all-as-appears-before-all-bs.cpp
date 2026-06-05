#include <string>

using namespace std;

class Solution {
public:
    bool checkString(string s) {
        // Nếu tìm thấy cụm "ba" thì trả về false, ngược lại trả về true
        return s.find("ba") == string::npos;
    }
};